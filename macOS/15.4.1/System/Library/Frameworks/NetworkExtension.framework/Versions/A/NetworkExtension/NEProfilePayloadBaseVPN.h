@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
    BOOL _userNameRequired;
    BOOL _passwordRequired;
    BOOL _proxyUserNameRequired;
    BOOL _proxyPasswordRequired;
    BOOL _sharedSecretRequired;
    BOOL _pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)validatePayload;
- (id)getPreprocessedPayloadContents;
- (BOOL)setPostprocessedPayloadContents:(id)a0;

@end
