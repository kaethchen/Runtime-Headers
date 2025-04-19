@class NSString;

@interface ORGOPendingRMAccountCreator : CPUI_EnrollmentController

@property (retain) NSString *rmAccountID;

- (void).cxx_destruct;
- (BOOL)debug_SimulateFailMAIDSignInWithError:(id *)a0;
- (BOOL)promptForMDMInstallAuthRightDuringMAIDSignIn;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)startEnrollmentInWindow:(id)a0 mdmProfile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;

@end
