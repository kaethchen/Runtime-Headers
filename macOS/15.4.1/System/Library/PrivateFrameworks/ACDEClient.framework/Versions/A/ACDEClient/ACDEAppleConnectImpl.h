@class NSString, NSMutableSet, ACDSystemInfo, ACDEAuthenticationRequestImpl;
@protocol ACC2SVControllerProtocol, ACDEUIControllerProtocol, ACMAppleConnectPreferences, ACCTicketManagerProtocol, ACDEAppleConnectDelegate, NSObject;

@interface ACDEAppleConnectImpl : NSObject <ACM2SVTransportControllerDelegate, ACC2SVControllerDelegate, ACDEAppleConnect, ACDEUIControllerDelegate> {
    NSMutableSet *_handlers;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) id<ACDEUIControllerProtocol> uiController;
@property (retain, nonatomic) ACDEAuthenticationRequestImpl *currentRequest;
@property (retain, nonatomic) id<ACC2SVControllerProtocol> twoSVController;
@property id<ACDEAppleConnectDelegate, NSObject> delegate;
@property id masterObject;
@property (readonly, retain) id<ACMAppleConnectPreferences> preferences;
@property (readonly, retain) id<ACCTicketManagerProtocol> ticketManager;
@property (readonly, retain) ACDSystemInfo *systemInfo;
@property (readonly, retain) NSMutableSet *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int logLevel;

- (void)dealloc;
- (id)parentWindow;
- (void)reportError:(id)a0;
- (void)returnError:(id)a0;
- (void)scheduleHandler:(id)a0 withCompletion:(id /* block */)a1;
- (void)returnResponse:(id)a0;
- (void)authenticate:(id)a0 completion:(id /* block */)a1;
- (void)authenticate:(id)a0 withPassword:(id)a1;
- (void)authenticateRunningOnMainThreadWithRequest:(id)a0;
- (id)clipString:(id)a0 maxLength:(unsigned long long)a1;
- (void)controllerOnSignIn:(id)a0 withPassword:(id)a1;
- (void)controllerOnSignInCancel:(id)a0;
- (void)controllerOnSignInCreateAppleID:(id)a0;
- (void)controllerOnSignInForgotAppleID:(id)a0;
- (void)controllerOnSignInForgotPassword:(id)a0;
- (void)controllerOnSignInShowHelp:(id)a0;
- (void)hideSignIn;
- (id)initWithMasterObject:(id)a0;
- (BOOL)isWidgetShown;
- (void)onManageAppleIDForRealm:(id)a0;
- (void)report2SVServiceTicket:(id)a0;
- (void)returnError:(id)a0 withSelector:(SEL)a1 withResponseClass:(Class)a2;
- (void)returnResponse:(id)a0 withSelector:(SEL)a1;
- (void)returnServiceTicket:(id)a0 withUserName:(id)a1;
- (void)saveUserName:(id)a0 password:(id)a1 account:(id)a2;
- (void)showSignInDialog;
- (void)showSignInWithRequest:(id)a0;
- (void)signInDialogDidHide;
- (void)signInDialogWillHide;
- (void)twoSVController:(id)a0 openMyAppleConnectForRealm:(id)a1;
- (void)twoSVController:(id)a0 prepareUIWithCompletion:(id /* block */)a1;
- (void)twoSVControllerEnterCredentials:(id)a0;
- (void)twoSVControllerWillClose:(id)a0;
- (void)twoSVTransportController:(id)a0 scheduleHandler:(id)a1 withCompletion:(id /* block */)a2;
- (void)unscheduleAllHandlers;
- (void)unscheduleHandler:(id)a0;

@end
