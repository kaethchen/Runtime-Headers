@class NSData, NSString, _TtC26AuthenticationServicesCore47ASCPublicKeyCredentialAssertionExtensionOutputs;

@interface ASCPlatformPublicKeyCredentialAssertion : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *credentialID;
@property (copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *authenticatorData;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (retain, nonatomic) _TtC26AuthenticationServicesCore47ASCPublicKeyCredentialAssertionExtensionOutputs *extensions;
@property (readonly, copy, nonatomic) NSString *attachment;
@property (readonly, nonatomic) BOOL isExternal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
