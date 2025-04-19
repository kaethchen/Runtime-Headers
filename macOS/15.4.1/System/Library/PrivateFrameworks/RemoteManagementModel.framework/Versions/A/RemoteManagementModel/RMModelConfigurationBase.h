@interface RMModelConfigurationBase : RMModelDeclarationBase

+ (id)assetTypes;
+ (id)combineArrayAppend:(id)a0 other:(id)a1;
+ (id)combineBooleanAnd:(id)a0 other:(id)a1;
+ (id)combineBooleanOr:(id)a0 other:(id)a1;
+ (id)combineDictionary:(id)a0 other:(id)a1;
+ (id)combineEnumFirst:(id)a0 other:(id)a1 enums:(id)a2;
+ (id)combineEnumLast:(id)a0 other:(id)a1 enums:(id)a2;
+ (id)combineFirst:(id)a0 other:(id)a1;
+ (id)combineMergeDictionary:(id)a0 other:(id)a1;
+ (id)combineNumberMax:(id)a0 other:(id)a1;
+ (id)combineNumberMin:(id)a0 other:(id)a1;
+ (id)combineSetIntersection:(id)a0 other:(id)a1;
+ (id)combineSetUnion:(id)a0 other:(id)a1;
+ (BOOL)usesKeychainAssets;

- (id)assetReferences;
- (void)_walkObject:(id)a0 keyPath:(id)a1 assetReference:(id)a2 result:(id)a3 processedIdentifiers:(id)a4;
- (void)_addAssetReference:(id)a0 identifier:(id)a1 keyPath:(id)a2 result:(id)a3 processedIdentifiers:(id)a4;
- (id)assetReferencesFromKeyPaths:(id)a0 payloadObject:(id)a1;
- (id)declarationClassType;

@end
