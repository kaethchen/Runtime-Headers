@protocol RMConfigurationCombineAdapter;

@interface WrappedCombineAdapter : NSObject

@property (readonly, nonatomic) id<RMConfigurationCombineAdapter> wrappedAdapter;

- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (void)allDeclarationKeysForScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)beginProcessingConfigurationsForScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)endProcessingConfigurations:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)applyCombinedConfiguration:(id)a0 declarationKeys:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)removeCombinedConfigurationForScope:(long long)a0 completionHandler:(id /* block */)a1;

@end
