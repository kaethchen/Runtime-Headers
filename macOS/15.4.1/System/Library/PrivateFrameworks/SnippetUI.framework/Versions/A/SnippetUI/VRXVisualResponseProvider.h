@class _TtC9SnippetUI22VisualResponseProvider;

@interface VRXVisualResponseProvider : NSObject

@property (readonly) _TtC9SnippetUI22VisualResponseProvider *provider;

+ (void)preWarm:(id)a0;
+ (void)setPatternId:(id)a0 forViewId:(id)a1;
+ (void)preloadPlugins;
+ (void)prewarmPlugin:(id)a0;
+ (id)transformModel:(id)a0 mode:(long long)a1 currentIdiom:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)viewForModel:(id)a0 mode:(long long)a1;
- (id)viewForSnippetModel:(id)a0 bundleName:(id)a1 mode:(long long)a2;
- (id)transformModel:(id)a0 mode:(long long)a1;
- (id)viewControllerForModel:(id)a0 mode:(long long)a1;
- (void)viewControllerForModel:(id)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (id)viewControllerForSnippetModel:(id)a0 bundleName:(id)a1 mode:(long long)a2;

@end
