@interface IASAuthenticationAgentController : NSObject

+ (id)sharedController;

- (id)_getAgentConnectionForCurrentUser;
- (id)getSSOServiceTicketWithUI:(BOOL)a0 serviceID:(id)a1 appID:(id)a2 outUsername:(id *)a3 outDAWToken:(id *)a4 error:(id *)a5;

@end
