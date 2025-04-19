@class WFRemoteWidgetConnection;

@interface WFRemoteLinkAction : WFLinkAction

@property (retain, nonatomic) WFRemoteWidgetConnection *remoteWidgetConnection;

- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 bundleIdentifier:(id)a1 metadata:(id)a2 serializedParameters:(id)a3 fullyQualifiedActionIdentifier:(id)a4 remoteWidgetConnection:(id)a5;
- (id)linkActionWithParameters:(id)a0;
- (void)loadDefaultResultForEnumeration:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadDynamicResultForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;

@end
