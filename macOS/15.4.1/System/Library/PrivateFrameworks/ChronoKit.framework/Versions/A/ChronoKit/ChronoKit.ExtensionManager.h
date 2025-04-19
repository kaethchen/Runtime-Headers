@interface ChronoKit.ExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    void /* unknown type, empty encoding */ requireValidExtensions;
    void /* unknown type, empty encoding */ _extensionsPublisher;
    void /* unknown type, empty encoding */ _addedPublisher;
    void /* unknown type, empty encoding */ _updatedPublisher;
    void /* unknown type, empty encoding */ _removedPublisher;
    void /* unknown type, empty encoding */ extensionsByIdentifier;
    void /* unknown type, empty encoding */ removedPluginUUIDsByIdentifier;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ lookupLock;
    void /* unknown type, empty encoding */ nsExtensionDiscovererSubscription;
    void /* unknown type, empty encoding */ nsExtensionDiscoverer;
    void /* unknown type, empty encoding */ remoteWidgetExtensionSubscription;
    void /* unknown type, empty encoding */ remoteWidgetExtensionProvider;
    void /* unknown type, empty encoding */ applicationWorkspace;
    void /* unknown type, empty encoding */ extensionFactory;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pluginsDidUninstall:(id)a0;

@end
