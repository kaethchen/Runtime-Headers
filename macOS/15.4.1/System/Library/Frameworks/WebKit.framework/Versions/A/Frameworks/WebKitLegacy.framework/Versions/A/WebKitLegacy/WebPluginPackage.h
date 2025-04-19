@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (void)dealloc;
- (BOOL)load;
- (id)bundle;
- (id)initWithPath:(id)a0;
- (Class)viewFactory;

@end
