@class NSData, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol;

@interface NEIKEv2SecurityContextCBCPlusHMAC : NEIKEv2SecurityContext {
    NEIKEv2EncryptionProtocol *_encryptionProtocol;
    struct _CCCryptor { } *_outgoingEncryptionContext;
    struct _CCCryptor { } *_incomingEncryptionContext;
    NEIKEv2IntegrityProtocol *_integrityProtocol;
    NSData *_outgoingHMACBaseContext;
    NSData *_incomingHMACBaseContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)constructEncryptedPacketFromPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (unsigned int)maximumPayloadSizeWithinLimit:(unsigned int)a0;
- (unsigned int)overheadForPlaintextLength:(unsigned int)a0;

@end
