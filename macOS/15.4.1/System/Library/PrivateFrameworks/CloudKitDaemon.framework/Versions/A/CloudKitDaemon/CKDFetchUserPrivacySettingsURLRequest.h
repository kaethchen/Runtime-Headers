@class CKDPUserPrivacySettings;

@interface CKDFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
