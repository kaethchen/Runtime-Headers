@class WrappedCombineAdapter;
@protocol RMConfigurationCombineAdapter;

@interface RMConfigurationCombineApplicator : NSObject

@property (readonly, nonatomic) WrappedCombineAdapter *wrappingAdapter;
@property (nonatomic) BOOL doKeychainUnassign;
@property (readonly, nonatomic) id<RMConfigurationCombineAdapter> adapter;

- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_beginProcessingWithConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (void)_endProcessingWithSuccess:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_fetchExistingDeclarationKeysWithConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_installDeclarationKeysWithScope:(long long)a0 configurations:(id)a1 completionHandler:(id /* block */)a2;
- (void)_processExistingDeclarationKeysWithConfigurations:(id)a0 oldDeclarationKeys:(id)a1 storesByIdentifier:(id)a2 scope:(long long)a3 completionHandler:(id /* block */)a4;
- (void)_sendStatusForFailedKeys:(id)a0 enumerator:(id)a1 applyError:(id)a2 scope:(long long)a3 configurations:(id)a4 completionHandler:(id /* block */)a5;
- (void)_sendStatusForSuccessKeys:(id)a0 failedKeys:(id)a1 reasons:(id)a2 applyError:(id)a3 scope:(long long)a4 configurations:(id)a5 success:(BOOL)a6 completionHandler:(id /* block */)a7;
- (void)_sendStatusForSuccessKeys:(id)a0 reasons:(id)a1 scope:(long long)a2 configurations:(id)a3 completionHandler:(id /* block */)a4;
- (void)_uninstallDeclarationKeys:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;

@end
