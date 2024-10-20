import * as React from 'react'

import {
  StyleSheet,
  View,
  Text,
  ScrollView,
  Button,
  Platform,
} from 'react-native'
import {
  HybridTestObjectCpp,
  HybridTestObjectSwiftKotlin,
  HybridChild,
  HybridBase,
} from 'react-native-nitro-image'
import { getTests, type TestRunner } from '../getTests'
import { SafeAreaView } from 'react-native-safe-area-context'
import { logPrototypeChain } from '../logPrototypeChain'
import SegmentedControl from '@react-native-segmented-control/segmented-control'
import { NitroModules } from 'react-native-nitro-modules'

logPrototypeChain(HybridChild)
console.log(HybridBase.baseValue)
console.log(HybridChild.baseValue)
console.log(HybridChild.childValue)

logPrototypeChain(HybridTestObjectCpp)

interface TestState {
  runner: TestRunner
  state: '📱 Click to run' | '⏳ Running' | '❌ Failed' | '✅ Passed'
  extraMessage: string
}

interface TestCaseProps {
  test: TestState
  onRunPressed: () => void
}

function TestCase({ test, onRunPressed }: TestCaseProps): React.ReactElement {
  return (
    <View style={styles.testCase}>
      <View style={styles.testBox}>
        <Text style={styles.testName}>{test.runner.name}</Text>
        <View style={styles.smallVSpacer} />
        <Text style={styles.testStatus} numberOfLines={6}>
          {test.state} ({test.extraMessage})
        </Text>
      </View>
      <View style={styles.flex} />
      <Button title="Run" onPress={onRunPressed} />
    </View>
  )
}

export function HybridObjectTestsScreen() {
  const [selectedIndex, setSelectedIndex] = React.useState(0)
  const selectedObject = [HybridTestObjectCpp, HybridTestObjectSwiftKotlin][
    selectedIndex
  ]
  const MathModule = NitroModules.createHybridObject<Math>("Math")
  return (
    <SafeAreaView style={styles.container}>
      <Text style={styles.header}>HybridObject Tests</Text>

      <View style={styles.bottomView}>
        <Button title="Run Hybrid Object" onPress={() => null} />
        <Text>{MathModule.add(5, 7)}</Text>
      </View>
    </SafeAreaView>
  )
}

const styles = StyleSheet.create({
  header: {
    fontSize: 26,
    fontWeight: 'bold',
    paddingBottom: 15,
    marginHorizontal: 15,
  },
  container: {
    flex: 1,
    paddingVertical: 10,
    backgroundColor: 'white'
  },
  scrollContent: {
    paddingHorizontal: 15,
  },
  topControls: {
    marginHorizontal: 15,
    marginBottom: 10,
    flexDirection: 'row',
    alignItems: 'center',
  },
  buildTypeText: {
    fontFamily: Platform.select({
      ios: 'Menlo',
      macos: 'Menlo',
      android: 'monospace',
    }),
    fontWeight: 'bold',
  },
  segmentedControl: {
    minWidth: 180,
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
  testCase: {
    width: '100%',
    borderBottomWidth: StyleSheet.hairlineWidth,
    paddingVertical: 10,
    flexDirection: 'row',
    alignItems: 'center',
  },
  testBox: {
    flexShrink: 1,
    flexDirection: 'column',
  },
  testName: {
    fontSize: 16,
    fontWeight: 'bold',
  },
  testStatus: {
    fontSize: 14,
    flex: 1,
  },
  smallVSpacer: {
    height: 5,
  },
  flex: { flex: 1 },
  bottomView: {
    paddingHorizontal: 15,
    paddingTop: 15,
    alignItems: 'center',
  },
})
