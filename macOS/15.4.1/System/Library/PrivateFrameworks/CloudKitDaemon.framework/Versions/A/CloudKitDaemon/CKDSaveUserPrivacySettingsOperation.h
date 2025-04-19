@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (void)main;
- (id)activityCreate;
- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)shouldCheckAppVersion;

@end
