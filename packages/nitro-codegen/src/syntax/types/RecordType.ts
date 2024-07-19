import type { Language } from '../../getPlatformSpecs.js'
import type { SourceFile } from '../SourceFile.js'
import type { Type, TypeKind } from './Type.js'

export class RecordType implements Type {
  readonly keyType: Type
  readonly valueType: Type

  constructor(keyType: Type, valueType: Type) {
    this.keyType = keyType
    this.valueType = valueType
  }

  get canBePassedByReference(): boolean {
    return true
  }
  get kind(): TypeKind {
    return 'record'
  }

  getCode(language: Language): string {
    const keyCode = this.keyType.getCode(language)
    const valueCode = this.valueType.getCode(language)

    switch (language) {
      case 'c++':
        return `std::unordered_map<${keyCode}, ${valueCode}>`
      default:
        throw new Error(
          `Language ${language} is not yet supported for RecordType!`
        )
    }
  }
  getExtraFiles(): SourceFile[] {
    return [...this.keyType.getExtraFiles(), ...this.valueType.getExtraFiles()]
  }
}