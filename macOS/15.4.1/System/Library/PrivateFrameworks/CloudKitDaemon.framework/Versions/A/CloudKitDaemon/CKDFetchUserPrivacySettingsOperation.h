@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

- (void)main;
- (id)activityCreate;
- (int)operationType;
- (void)_handleRetrievedPrivacySettings:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
