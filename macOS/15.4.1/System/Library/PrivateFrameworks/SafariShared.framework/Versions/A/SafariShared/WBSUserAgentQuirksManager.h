@class WBSRemotelyUpdatableDataController;

@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (id)init;
- (void).cxx_destruct;
- (void)getQuirksForURLString:(id)a0 withDefaultUserAgent:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithBuiltInQuirkListURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (void)prepareForTermination;

@end
