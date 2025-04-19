@class NSString, NSMutableDictionary;

@interface SHKPlugInObservingCache : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)pluginsDidInstall:(id)a0;
- (void)pluginsWillUninstall:(id)a0;
- (BOOL)needsRefresh;
- (id)bundleForURL:(id)a0;
- (void)setBundle:(id)a0 forURL:(id)a1;

@end
