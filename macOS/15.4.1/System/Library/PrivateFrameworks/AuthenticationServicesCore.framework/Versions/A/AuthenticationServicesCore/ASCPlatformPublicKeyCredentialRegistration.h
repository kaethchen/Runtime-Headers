@class NSString, NSArray, NSData, _TtC26AuthenticationServicesCore50ASCPublicKeyCredentialRegistrationExtensionOutputs;

@interface ASCPlatformPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *attestationObject;
@property (copy, nonatomic) NSData *rawClientDataJSON;
@property (copy, nonatomic) NSArray *transports;
@property (retain, nonatomic) _TtC26AuthenticationServicesCore50ASCPublicKeyCredentialRegistrationExtensionOutputs *extensions;
@property (readonly, copy, nonatomic) NSString *attachment;
@property (readonly, nonatomic) BOOL isExternal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
