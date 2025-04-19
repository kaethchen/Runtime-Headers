@class WrappedSingleAdapter;
@protocol RMConfigurationSingleAdapter;

@interface RMConfigurationSingleApplicator : NSObject

@property (readonly, nonatomic) WrappedSingleAdapter *wrappingAdapter;
@property (nonatomic) BOOL doKeychainUnassign;
@property (readonly, nonatomic) id<RMConfigurationSingleAdapter> adapter;

- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_invalidDeclarationKeys:(id)a0 scope:(long long)a1 configurations:(id)a2 completionHandler:(id /* block */)a3;
- (void)_beginProcessingWithConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_cleanupDeclarationKeyIfNeeded:(id)a0 scope:(long long)a1 doIt:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (void)_endProcessingWithSuccess:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_fetchExistingDeclarationKeyWithConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_installDeclarationKey:(id)a0 scope:(long long)a1 configurations:(id)a2 completionHandler:(id /* block */)a3;
- (void)_processExistingDeclarationKeyWithConfigurations:(id)a0 oldDeclarationKey:(id)a1 storesByIdentifier:(id)a2 scope:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)_supportedConfigurationType:(id)a0;
- (void)_uninstallDeclarationKey:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_usesKeychain;

@end
