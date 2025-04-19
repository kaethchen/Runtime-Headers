@class NSMutableData, NSData;

@interface NEIKEv2SecurityContextChaCha20Poly1305 : NEIKEv2SecurityContext {
    NSMutableData *_outgoingEncryptionContext;
    NSMutableData *_incomingEncryptionContext;
    NSData *_outgoingEncryptionSalt;
    NSData *_incomingEncryptionSalt;
    unsigned long long _currentOutgoingIV;
}

- (void).cxx_destruct;
- (id)constructEncryptedPacketFromPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;

@end
