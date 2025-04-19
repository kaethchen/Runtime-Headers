@class NSArray, NEIKEv2KEMProtocol, NSSet, NEIKEv2EncryptionProtocol, NSDictionary, NEIKEv2IntegrityProtocol, NEIKEv2AuthenticationProtocol, NEIKEv2PRFProtocol;

@interface NEIKEv2IKESAProposal : NSObject <NEPrettyDescription, NSCopying> {
    unsigned char _proposalNumber;
    NSDictionary *_chosenAdditionalKEMProtocols;
    NSSet *_unsupportedTransformTypes;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2KEMProtocol *_chosenKEMProtocol;
    NSArray *_chosenAdditionalKETransforms;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}

@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *prfProtocols;
@property (retain) NSArray *kemProtocols;
@property (retain) NSDictionary *additionalKEMProtocols;
@property (retain) NSArray *eapProtocols;
@property unsigned long long lifetimeSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
