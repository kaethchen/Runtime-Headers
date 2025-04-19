@class PKReceipt;

@interface PFPKReceipt : PFPackage {
    PKReceipt *_receipt;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)name;
- (id)identifier;
- (id)path;
- (id)version;
- (id)location;
- (id)title;
- (int)capabilities;
- (id)initWithReceipt:(id)a0;

@end
