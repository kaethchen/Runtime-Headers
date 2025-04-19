@class NSData;

@interface ASAuthorizationPublicKeyCredentialPRFAssertionInputValues : NSObject {
    void /* unknown type, empty encoding */ saltInput1;
    void /* unknown type, empty encoding */ saltInput2;
}

@property (nonatomic, readonly) NSData *saltInput1;
@property (nonatomic, readonly) NSData *saltInput2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSaltInput1:(id)a0 saltInput2:(id)a1;

@end
