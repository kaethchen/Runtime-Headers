@class NSArray, NSBundle;

@interface ASKPluginLoader : NSObject {
    NSBundle *_pluginBundle;
    NSArray *_topLevelObjects;
}

- (void)dealloc;
- (void)load:(id)a0;
- (id)initWithPluginBundle:(id)a0;

@end
