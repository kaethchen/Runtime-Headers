@class NSString, VMUClassInfo;

@interface VMUMutableClassInfo : VMUClassInfo

@property (retain, nonatomic) VMUClassInfo *superclassInfo;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *binaryPath;
@property (nonatomic) BOOL isCoreMediaFigObject;
@property (nonatomic) unsigned int defaultScanType;
@property (nonatomic) unsigned int instanceSize;
@property (nonatomic) unsigned int superclassOffset;
@property (nonatomic) BOOL isRootClass;
@property (nonatomic) unsigned int infoType;

- (void)setDisplayName:(id)a0;
- (void)setFields:(id)a0;
- (void)addFields:(id)a0;
- (void)addComplexAction:(id /* block */)a0 withEvaluator:(id /* block */)a1;
- (void)setIsRootClass:(BOOL)a0;
- (void)addVariant:(id)a0 forField:(id)a1 withEvaluator:(id /* block */)a2;
- (void)addVariantRecursively:(id)a0 forField:(id)a1 atOffset:(unsigned int)a2 withEvaluator:(id /* block */)a3;
- (void)mutateTypeFieldsRecursivelyWithBlock:(id /* block */)a0;
- (void)mutateTypeFieldsWithBlock:(id /* block */)a0;
- (void)replaceField:(id)a0 withFields:(id)a1;
- (void)replaceFieldRecursively:(id)a0 atOffset:(unsigned int)a1 withField:(id)a2;
- (void)setBinaryPath:(id)a0;
- (void)setDefaultScanType:(unsigned int)a0;
- (void)setInfoType:(unsigned int)a0;
- (void)setInstanceSize:(unsigned int)a0;
- (void)setIsCoreMediaFigObject:(BOOL)a0;
- (void)setSuperclassInfo:(id)a0;
- (void)setSuperclassOffset:(unsigned int)a0;
- (void)setVariantScanType:(unsigned int)a0 withEvaluator:(id /* block */)a1;

@end
