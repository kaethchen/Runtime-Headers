@interface SnippetUI.VisualResponseProvider : NSObject

+ (void)preWarm:(id)a0;
+ (void)setPatternId:(id)a0 forViewId:(id)a1;
+ (void)preloadPlugins;
+ (void)prewarmPlugin:(id)a0;
+ (id)transformModel:(id)a0 mode:(long long)a1 currentIdiom:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)viewForSnippetModel:(id)a0 bundleName:(id)a1 mode:(long long)a2;
- (void)viewControllerFor:(id)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (id)viewControllerForModel:(id)a0 mode:(long long)a1;
- (id)viewControllerForSnippetModel:(id)a0 bundleName:(id)a1 mode:(long long)a2;
- (id)viewForModel:(id)a0 mode:(long long)a1 overload:(long long)a2;

@end
