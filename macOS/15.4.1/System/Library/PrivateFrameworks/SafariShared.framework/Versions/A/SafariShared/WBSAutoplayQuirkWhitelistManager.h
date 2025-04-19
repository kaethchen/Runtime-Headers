@class WBSRemotelyUpdatableDataController;

@interface WBSAutoplayQuirkWhitelistManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuiltInWhitelistURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (void)prepareForTermination;
- (void)quirksForDomain:(id)a0 completionHandler:(id /* block */)a1;

@end
