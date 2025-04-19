@class NSString, TSTTableInfo;

@interface TNFormBasedSheet : TNSheet

@property (retain, nonatomic) NSString *importedTargetName;
@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) BOOL hasValidTableInfoForViewingForm;
@property (readonly, nonatomic) BOOL hasValidTableInfoForBuildingForm;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;

- (void).cxx_destruct;
- (double)contentScale;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)clearTableInfoCache;
- (id)initWithContext:(id)a0 importedTargetName:(id)a1;
- (BOOL)isForm;
- (BOOL)isPrintable;
- (void)resolveImportedTargetNameInDocumentRoot:(id)a0;
- (BOOL)shouldBeDisplayed;

@end
