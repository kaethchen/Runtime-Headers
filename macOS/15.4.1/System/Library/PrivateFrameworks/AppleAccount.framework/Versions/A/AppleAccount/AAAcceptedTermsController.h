@interface AAAcceptedTermsController : NSObject

- (void)saveTermsAcceptance:(id)a0 forAccount:(id)a1;
- (void)_recordTermsForBuddyWithTermsInfo:(id)a0;
- (void)_repairTermsBackup:(id)a0 forAccount:(id)a1;
- (BOOL)_shouldRecordTermsForBuddyWithTermsInfo:(id)a0;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;

@end
