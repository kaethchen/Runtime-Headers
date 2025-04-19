@class WBSSavedAccount;

@interface AccountManagerAirDropSharingAuthenticationContext : NSObject

@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) BOOL hasBeenAuthenticated;

- (void).cxx_destruct;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)authenticateWithSheetFromWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSavedAccount:(id)a0;
- (int)_authorizationRight;

@end
