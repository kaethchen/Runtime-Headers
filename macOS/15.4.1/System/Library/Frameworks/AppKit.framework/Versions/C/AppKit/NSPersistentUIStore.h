@class NSURL;

@interface NSPersistentUIStore : NSObject

@property (class, readonly, copy) NSURL *serviceContainerURL;
@property (class, readonly) BOOL useRemoteStore;

+ (id)defaultStoreWithBundleIdentifier:(id)a0;
+ (id)remoteStore;

@end
