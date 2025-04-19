@protocol RMConfigurationMultipleAdapter;

@interface WrappedMultipleAdapter : NSObject

@property (readonly, nonatomic) id<RMConfigurationMultipleAdapter> wrappedAdapter;

- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (void)allDeclarationKeysForScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)applyConfiguration:(id)a0 replaceKey:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)beginProcessingConfigurationsForScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)endProcessingConfigurations:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)removeDeclarationKey:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;

@end
