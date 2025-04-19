@class NEIKEv2ESPSPI, NSArray, NSDictionary, NSSet, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NEIKEv2KEMProtocol;

@interface NEIKEv2ChildSAProposal : NSObject <NEPrettyDescription, NSCopying> {
    unsigned char _proposalNumber;
    BOOL _noESNTransformPresent;
    NSDictionary *_chosenAdditionalKEMProtocols;
    NSSet *_unsupportedTransformTypes;
    NEIKEv2ESPSPI *_spi;
    NEIKEv2ESPSPI *_remoteSPI;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2KEMProtocol *_chosenKEMProtocol;
    NSArray *_chosenAdditionalKETransforms;
}

@property unsigned long long protocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *kemProtocols;
@property (retain) NSDictionary *additionalKEMProtocols;
@property unsigned long long lifetimeSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
