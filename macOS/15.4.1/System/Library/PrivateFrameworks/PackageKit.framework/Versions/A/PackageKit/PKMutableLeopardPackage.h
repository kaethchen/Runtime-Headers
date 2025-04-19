@interface PKMutableLeopardPackage : PKMutablePackage

+ (id)_bundleAttributeDictionaryForComponent:(id)a0;
+ (id)_intendedPayloadEncodingForMinimumOSVersion:(id)a0;
+ (id)_intendedPayloadEncodingForPackageInfo:(id)a0;

- (void)setComponents:(id)a0;
- (void)_setComponents:(id)a0;
- (void)_setScriptRoot:(id)a0;
- (void)_setMapBaselineNamesUsingBlock:(id /* block */)a0;
- (void)setPayloadRoot:(id)a0;
- (void)_adjustModeOnPath:(id)a0 inBom:(id)a1 usingBlock:(id /* block */)a2;
- (void)_adjustOwnershipOnPath:(id)a0 inBom:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)_createUpdatePayloadAtPath:(id)a0 fromBaseline:(id)a1 toNew:(id)a2 currentPrefix:(id)a3 currentComponent:(id)a4 componentMap:(id)a5 tempDir:(id)a6 totalPayloadSize:(unsigned long long *)a7 didCreate:(BOOL *)a8 error:(id *)a9;
- (id)_effectivePayloadRoot;
- (id)_generateBomPathToRealPathDictionaryWithDestinationPath:(id)a0;
- (void)_setBaselinePayloadRoot:(id)a0;
- (void)_setGenerateBinaryPatches:(BOOL)a0;
- (void)_setMaskExpressions:(id)a0;
- (void)_setModifyModeUsingBlock:(id /* block */)a0;
- (void)_setModifyOwnershipUsingBlock:(id /* block */)a0;
- (void)_setPayloadRoot:(id)a0;
- (void)_setStaticObsoleteDirectories:(id)a0;
- (void)_setStaticObsoleteFiles:(id)a0;
- (void)_staticObsoleteFilesOrRecursiveDirectories:(id)a0;
- (void)_updatePackageInfoWithComponents;
- (BOOL)_writeBomToFile:(id)a0 error:(id *)a1 modifyOwnershipUsingBlock:(id /* block */)a2 modifyModeUsingBlock:(id /* block */)a3;
- (BOOL)_writePayloadToFile:(id)a0 usingBom:(id)a1 tempDir:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)_writeRoot:(id)a0 toCompressedCPIO:(id)a1 usingBom:(id)a2 largeAndSegmented:(BOOL)a3 options:(id)a4 error:(id *)a5;
- (BOOL)_writeScriptsToFile:(id)a0 error:(id *)a1;
- (BOOL)_writeToArchive:(id)a0 atPath:(id)a1 options:(id)a2 error:(id *)a3;
- (void)setBaselinePayloadRoot:(id)a0;
- (void)setGenerateBinaryPatches:(BOOL)a0;
- (void)setMapBaselineNamesUsingBlock:(id /* block */)a0;
- (void)setMaskExpressions:(id)a0;
- (void)setModifyModeUsingBlock:(id /* block */)a0;
- (void)setModifyOwnershipUsingBlock:(id /* block */)a0;
- (void)setScriptRoot:(id)a0;

@end
