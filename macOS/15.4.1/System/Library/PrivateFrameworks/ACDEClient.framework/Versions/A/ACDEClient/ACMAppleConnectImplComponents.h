@protocol ACC2SVControllerProtocol, ACMSystemInfoProtocol, ACMAppleConnectPreferences, ACMTicketManagerProtocol, ACMUIControllerProtocol, ACMUIControllerDelegate, ACFKeychainManagerProtocol;

@interface ACMAppleConnectImplComponents : ACCComponents {
    id<ACFKeychainManagerProtocol> _keychain;
}

@property (retain, nonatomic) id<ACMAppleConnectPreferences> preferences;
@property (retain, nonatomic) id<ACC2SVControllerProtocol> twoSVController;
@property (retain, nonatomic) id<ACMTicketManagerProtocol> ticketManager;
@property (retain, nonatomic) id<ACMSystemInfoProtocol> systemInfo;
@property (retain, nonatomic) id<ACMUIControllerProtocol> uiController;
@property (setter=setUIControllerDelegate:) id<ACMUIControllerDelegate> uiControllerDelegate;
@property (readonly) BOOL uiControllerLoaded;

+ (id)components;
+ (id)defaultComponents;

- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (id)createTicketVerificationRequest;
- (id)createTransport;
- (void)cleanupOnMemoryWarning;
- (id)createAuthenticationRequest;
- (void)unloadUIController;

@end
