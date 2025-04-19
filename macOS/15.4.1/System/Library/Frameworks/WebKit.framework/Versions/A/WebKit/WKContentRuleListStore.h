@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListStore> { struct type { unsigned char __lx[48]; } data; } _contentRuleListStore;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)defaultStore;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURL:(id)a0;
+ (id)storeWithURLAndLegacyFilename:(id)a0;

- (void)dealloc;
- (void)_corruptContentRuleListHeaderForIdentifier:(id)a0 usingCurrentVersion:(BOOL)a1;
- (void)_getContentRuleListSourceForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_invalidateContentRuleListHeaderForIdentifier:(id)a0;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)a0;
- (void)_removeAllContentRuleLists;
- (void)compileContentRuleListForIdentifier:(id)a0 encodedContentRuleList:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAvailableContentRuleListIdentifiers:(id /* block */)a0;
- (void)lookUpContentRuleListForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeContentExtensionForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeContentRuleListForIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
