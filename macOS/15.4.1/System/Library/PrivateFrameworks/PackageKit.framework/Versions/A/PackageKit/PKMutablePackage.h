@class NSArray, NSString;

@interface PKMutablePackage : PKPackage {
    NSArray *_onDiskComponents;
    NSString *_payloadRoot;
    NSString *_baselinePayloadRoot;
    BOOL _generateBinaryPatches;
    NSString *_scriptRoot;
    NSArray *_maskExpressions;
    id /* block */ _ownershipModifier;
    id /* block */ _modeModifier;
    id /* block */ _baselineNameMapper;
}

- (void)dealloc;
- (void)setComponents:(id)a0;
- (void)setPayloadRoot:(id)a0;
- (id)_componentMap;
- (void)_setStaticObsoleteDirectories:(id)a0;
- (void)_setStaticObsoleteFiles:(id)a0;
- (void)_staticObsoleteFilesOrRecursiveDirectories:(id)a0;
- (BOOL)_writeToArchive:(id)a0 atPath:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithPackageInfo:(id)a0;
- (id)initWithPackageInfo:(id)a0 ofType:(id)a1;
- (void)setBaselinePayloadRoot:(id)a0;
- (void)setGenerateBinaryPatches:(BOOL)a0;
- (void)setMapBaselineNamesUsingBlock:(id /* block */)a0;
- (void)setMaskExpressions:(id)a0;
- (void)setModifyModeUsingBlock:(id /* block */)a0;
- (void)setModifyOwnershipUsingBlock:(id /* block */)a0;
- (void)setScriptRoot:(id)a0;
- (BOOL)writeToArchive:(id)a0 error:(id *)a1;
- (BOOL)writeToArchive:(id)a0 options:(id)a1 error:(id *)a2;

@end
