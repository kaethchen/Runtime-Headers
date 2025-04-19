@class NSString, NSDictionary, NSURL, NSPersistentStoreDescription;

@interface IRPersistenceStore : NSObject {
    NSPersistentStoreDescription *_storeDescription;
}

@property (readonly) NSURL *url;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *storeType;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)loadWithCoordinator:(id)a0;

@end
