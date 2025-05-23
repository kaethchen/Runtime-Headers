@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface TBCoreDataStoreDescriptor : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription;

+ (id)defaultModelURL;
+ (id)clientStoreDescriptor;
+ (id)defaultPersistentStoreURLWithDirectory:(id)a0;
+ (id)defaultStoresDirectoryURL;
+ (id)directStoreDescriptor;
+ (id)serverStoreDescriptor;
+ (id)tempStoreDescriptor;
+ (id)tempStoresDirectoryURL;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 storeURL:(id)a1 modelURL:(id)a2;

@end
