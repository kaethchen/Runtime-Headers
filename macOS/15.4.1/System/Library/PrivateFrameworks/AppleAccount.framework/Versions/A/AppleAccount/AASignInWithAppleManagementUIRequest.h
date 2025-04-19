@interface AASignInWithAppleManagementUIRequest : AAAppleIDSettingsRequest

- (id)urlString;
- (id)urlRequest;
- (BOOL)_isPasswordAppInstalled;

@end
