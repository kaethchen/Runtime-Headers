@class NSData;

@interface ASAuthorizationPublicKeyCredentialPRFRegistrationOutput : NSObject {
    void /* unknown type, empty encoding */ first;
    void /* unknown type, empty encoding */ second;
}

@property (nonatomic) void /* unknown type, empty encoding */ isSupported;
@property (nonatomic, copy) NSData *first;
@property (nonatomic, copy) NSData *second;

- (id)init;
- (void).cxx_destruct;

@end
