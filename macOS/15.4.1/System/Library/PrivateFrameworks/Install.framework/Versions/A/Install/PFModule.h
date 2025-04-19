@class NSURL, NSDictionary, NSMutableDictionary;

@interface PFModule : NSObject <PFMeta, PFFileEnumerator, PFActionSupport, PFPayloadSupport, PFReceiptSupport, PFModuleSupport> {
    NSURL *_packageLocation;
    NSDictionary *_meta;
    NSMutableDictionary *_catalogInfo;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (BOOL)receiptExistsForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2;
+ (id)receiptIdentifiersForVolume:(id)a0;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)name;
- (id)identifier;
- (id)path;
- (id)version;
- (id)infoDictionary;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)groups;
- (id)location;
- (void)skipDescendents;
- (id)dependencies;
- (void)setInfoDictionary:(id)a0;
- (id)title;
- (int)capabilities;
- (id)information;
- (BOOL)validateContents:(id *)a0;
- (void)releaseFileData;
- (void)setCatalogInfo:(id)a0;
- (id)validatedDigest;
- (id)catalogInfo;
- (id)certificateIdentity;
- (id)createReceipt:(id)a0 withPlan:(id)a1;
- (id)digestOfType:(id)a0;
- (int)extractPayloadFiles:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (int)extractPayloadToDirectory:(id)a0;
- (int)extractPayloadWithPlan:(id)a0 toDirectory:(id)a1;
- (struct _BOMFSObject { } *)fileAtPath:(const char *)a0;
- (BOOL)hasAction:(id)a0;
- (BOOL)initFileEnumerator;
- (id)installPlan;
- (struct _BOMFSObject { } *)nextFile;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (void)resetFileEnumerator;
- (id)runAction:(id)a0 withContextDictionary:(id)a1 localization:(id)a2;
- (id)searchDefinitions;
- (id)taints;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)taskForExtraction:(id)a0;
- (id)taskForExtraction:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;
- (id)taskToCreateReceipt:(id)a0 withPlan:(id)a1;

@end
