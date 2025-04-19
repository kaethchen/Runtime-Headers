@class WBSUserDefinedContentBlockerManager;

@interface WBSPrivateBrowsingUserDefinedContentBlockerManager : WBSUserDefinedContentBlockerManager

@property (weak, nonatomic) WBSUserDefinedContentBlockerManager *normalBrowsingUserDefinedContentBlockerManager;

- (void).cxx_destruct;
- (void)_setCachedGlobalContentBlockerActions:(id)a0;
- (id)cachedGlobalContentBlockerActions;
- (void)getGlobalContentBlockerWithCompletionHandler:(id /* block */)a0;
- (void)globalContentBlockerWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasContentBlockerWithActions;

@end
