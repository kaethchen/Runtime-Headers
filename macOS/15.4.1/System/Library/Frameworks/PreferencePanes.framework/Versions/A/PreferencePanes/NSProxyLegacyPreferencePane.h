@interface NSProxyLegacyPreferencePane : NSVBProxyPreferencePane

@property int desiredArchitecture;

- (id)remoteObjectInterface;
- (id)serviceName;
- (id)serviceSubclassName;
- (void)assignConnection:(id)a0;
- (id)initWithPrefPaneBundle:(id)a0;

@end
