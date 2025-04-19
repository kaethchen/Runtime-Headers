@class NSMutableArray;

@interface SFTokenHIPluginSupport : NSObject {
    NSMutableArray *mInstances;
}

- (void)dealloc;
- (id)init;
- (id)allBundles:(id)a0;
- (id)instanceOfClassNamed:(id)a0;
- (void)loadAllPlugins;

@end
