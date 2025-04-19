@class WFContactStore, WFAction;
@protocol WFUserInterfaceHost;

@interface WFActionContentPermissionRequestor : NSObject <WFContentPermissionRequestor>

@property (readonly, weak, nonatomic) WFAction *action;
@property (retain, nonatomic) id<WFUserInterfaceHost> userInterface;
@property (retain, nonatomic) WFContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0;
- (void)allowContactsAccessWithCompletionHandler:(id /* block */)a0;
- (void)allowNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)a0;
- (void)requestUserConsentToLoadWebContentAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_allowNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;

@end
