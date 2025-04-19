@interface PMSignInWithAppleController : NSObject

- (void)deleteAllItemsFromDepartedGroupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)leaveGroupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)participantRemovedWithContext:(id)a0 participantID:(id)a1 completion:(id /* block */)a2;
- (void)cancelAppIconRequestBundleID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppIconForBundleID:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)performHealthCheckInBackground;

@end
