@class NSObject;
@protocol OS_dispatch_queue;

@interface IASAuthenticationManager : NSObject

@property void /* function */ *ssoGetServiceTicketFunc;
@property void /* function */ *ssoPostLoginFunc;
@property void /* function */ *ssoVerifyServiceTicket;
@property BOOL ssoFrameworkLoaded;
@property (retain) NSObject<OS_dispatch_queue> *ssoFrameworkLoadQueue;

+ (id)sharedManager;
+ (BOOL)ssoFrameworkAvailable;
+ (id)usernameAndTicketBlobWithSSOData:(id)a0 withUsername:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)getSSOServiceTicketAsOnConsoleUserWithUI:(BOOL)a0 serviceID:(id)a1 outUsername:(id *)a2 error:(id *)a3;
- (id)getSSOServiceTicketForUser:(id)a0 password:(id)a1 serviceID:(id)a2 outUsername:(id *)a3 error:(id *)a4;
- (id)getSSOServiceTicketWithUI:(BOOL)a0 serviceID:(id)a1 outUsername:(id *)a2 error:(id *)a3;
- (id)getSSOServiceTicketAsOnConsoleUserWithUI:(BOOL)a0 serviceID:(id)a1 appID:(id)a2 outUsername:(id *)a3 outDAWToken:(id *)a4 error:(id *)a5;
- (BOOL)_authenticateWithKeytabIfSet;
- (BOOL)_loadSSOFramework;
- (id)_locateSSOFramework;
- (id)getSSOServiceTicketWithUI:(BOOL)a0 username:(id)a1 password:(id)a2 serviceID:(id)a3 appID:(id)a4 outUsername:(id *)a5 outDAWToken:(id *)a6 error:(id *)a7;
- (id)getSSOServiceTicketWithUI:(BOOL)a0 username:(id)a1 password:(id)a2 serviceID:(id)a3 outUsername:(id *)a4 error:(id *)a5;

@end
