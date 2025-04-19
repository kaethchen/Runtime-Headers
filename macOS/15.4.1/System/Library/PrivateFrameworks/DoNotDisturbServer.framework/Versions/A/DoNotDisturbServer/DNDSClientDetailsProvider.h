@class NSMutableDictionary;

@interface DNDSClientDetailsProvider : NSObject {
    NSMutableDictionary *_detailsByIdentifier;
}

+ (id)_defaultModuleDirectories;

- (id)init;
- (void).cxx_destruct;
- (id)findClientDetailsForIdentifier:(id)a0;
- (void)_loadPreloadBundles;
- (id)clientDetailsForIdentifier:(id)a0;
- (id)clientDetailsForIdentifier:(id)a0 applicationBundleURL:(id)a1;

@end
