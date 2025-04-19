@interface TVISPersistentContainer : NSPersistentContainer

@property (readonly, nonatomic, getter=isReady) BOOL ready;

+ (id)defaultDirectoryURL;
+ (id)errorForCode:(long long)a0 underlyingError:(id)a1;

- (BOOL)loadPersistentStoreIfNeededWithError:(id *)a0;

@end
