@class NSMapTable;

@interface UINSHostedUIWindowRegistry : NSObject {
    NSMapTable *_extensionUUIDToWindowMap;
}

@property (class, readonly, nonatomic) UINSHostedUIWindowRegistry *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerWindow:(id)a0 forExtensionIdentifier:(id)a1;
- (id)registeredWindowSceneWithSceneIdentifier:(id)a0;
- (void)unregisterWindowForExtensionIdentifier:(id)a0;
- (id)windowWithExtensionIdentifier:(id)a0;

@end
