@class NSDictionary;

@interface ASAuthorizationPublicKeyCredentialPRFAssertionInput : NSObject {
    void /* unknown type, empty encoding */ perCredentialInputValues;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ inputValues;
@property (nonatomic, readonly) NSDictionary *perCredentialInputValues;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputValues:(id)a0 perCredentialInputValues:(id)a1;

@end
