@class WrappedMultipleAdapter;
@protocol RMConfigurationMultipleAdapter;

@interface RMConfigurationMultipleApplicator : NSObject

@property (readonly, nonatomic) WrappedMultipleAdapter *wrappingAdapter;
@property (nonatomic) BOOL doKeychainUnassign;
@property (readonly, nonatomic) id<RMConfigurationMultipleAdapter> adapter;
@property (nonatomic) BOOL inPlaceUpdates;
@property (nonatomic) BOOL removeBeforeApply;

- (void).cxx_destruct;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithAdapter:(id)a0 inPlaceUpdates:(BOOL)a1;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_installDeclarationKeys:(id)a0 scope:(long long)a1 configurations:(id)a2 completionHandler:(id /* block */)a3;
- (void)_beginProcessingWithConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_cleanupDeclarationKeysIfNeeded:(id)a0 scope:(long long)a1 doIt:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (void)_endProcessingWithSuccess:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_fetchExistingDeclarationKeysWithConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_processExistingDeclarationKeysWithConfigurations:(id)a0 oldDeclarationKeys:(id)a1 storesByIdentifier:(id)a2 scope:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)_supportedConfigurationType:(id)a0;
- (void)_uninstallDeclarationKeys:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_usesKeychain;

@end
