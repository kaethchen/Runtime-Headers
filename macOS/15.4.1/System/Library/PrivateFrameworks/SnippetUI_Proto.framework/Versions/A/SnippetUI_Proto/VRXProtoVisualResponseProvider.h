@class _TtC15SnippetUI_Proto27ProtoVisualResponseProvider;

@interface VRXProtoVisualResponseProvider : NSObject

@property (readonly) _TtC15SnippetUI_Proto27ProtoVisualResponseProvider *provider;

+ (void)preWarm:(id)a0;
+ (void)setPatternId:(id)a0 forViewId:(id)a1;
+ (id)transformModel:(id)a0 mode:(long long)a1 currentIdiom:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)viewForModel:(id)a0 mode:(long long)a1;
- (id)viewControllerForModel:(id)a0 mode:(long long)a1;
- (void)viewControllerForModel:(id)a0 mode:(long long)a1 completion:(id /* block */)a2;

@end
