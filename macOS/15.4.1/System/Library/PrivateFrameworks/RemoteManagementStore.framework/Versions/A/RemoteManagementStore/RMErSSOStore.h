@interface RMErSSOStore : NSObject <DMCEnrollmentFlowRMBridge>

+ (BOOL)isPreEnrollmentErSSOStore:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)createErSSOStoreWithDeclarations:(id)a0 chosenBundleID:(id)a1 personaID:(id)a2 isUserEnrollment:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)extensibleSSOProfileIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)linkErSSOStoreToMDMWithProfileIdentifier:(id)a0 accountIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeErSSOStoreWithCompletionHandler:(id /* block */)a0;
- (void)waitForActiveAndValidDeclarationsInErSSOStoreWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (id)appDetailsFromDeclarations:(id)a0 error:(id *)a1;

@end
