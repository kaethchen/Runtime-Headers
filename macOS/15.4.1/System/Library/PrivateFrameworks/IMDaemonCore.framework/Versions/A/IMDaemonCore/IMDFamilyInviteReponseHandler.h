@interface IMDFamilyInviteReponseHandler : NSObject

- (BOOL)canHandleNotificationResponse:(id)a0 userNotificationCenter:(id)a1;
- (void)handleNotificationResponse:(id)a0 userNotificationCenter:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isValidInviteURL:(id)a0;

@end
