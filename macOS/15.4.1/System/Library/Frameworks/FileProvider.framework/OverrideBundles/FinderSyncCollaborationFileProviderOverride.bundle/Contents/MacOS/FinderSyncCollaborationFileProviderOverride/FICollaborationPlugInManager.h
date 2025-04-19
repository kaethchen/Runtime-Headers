@interface FICollaborationPlugInManager : NSObject

+ (id)extensionIdentifierForURL:(id)a0;
+ (void)extensionIsReady:(id)a0;
+ (id)hostForExtension:(id)a0;
+ (id)hostForExtensionIdentifier:(id)a0;
+ (id)hostForExtensionUUID:(id)a0;
+ (void)initializePlugIns;
+ (void)removeFromPendingExtensionUUIDs:(id)a0;
+ (void)synchronizeWithDiscoveredExtensions:(id)a0 error:(id)a1;
+ (void)tearDownOneExtension:(id)a0;
+ (void)valuesForAttributes:(id)a0 forItemWithURL:(id)a1 completion:(id /* block */)a2;
+ (BOOL)allExtensionsHaveStartedAndRegistered;
+ (id)availableExtensionUUIDForURL:(id)a0;
+ (void)collaborationEndpointCreatingForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)giveUpOnExtensionsThatDidNotRegisterPromptly;
+ (id)hostForFilePathURL:(id)a0;
+ (void)resynchronizeWithDiscoveredExtensions;
+ (BOOL)startAvailableExtensionForURL:(id)a0;
+ (BOOL)waitForExtensionsToStartUpForURL:(id)a0;

@end
