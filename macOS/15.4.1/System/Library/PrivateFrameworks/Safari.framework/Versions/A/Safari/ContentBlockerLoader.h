@class NSMutableDictionary;

@interface ContentBlockerLoader : NSObject <ContentBlockerLoaderProtocol> {
    NSMutableDictionary *_identifiersOfContentBlockersBeingCompiledToDistributedNotificationRequired;
}

- (void).cxx_destruct;
- (void)loadContentBlockerWithIdentifier:(id)a0 previouslyLoadedHash:(id)a1 inContentBlockerStoreURL:(id)a2 sandboxExtensionToken:(id)a3 reply:(id /* block */)a4;
- (void)removeContentBlockerWithIdentifier:(id)a0 inContentBlockerStoreURL:(id)a1 reply:(id /* block */)a2;

@end
