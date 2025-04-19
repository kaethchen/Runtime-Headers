@class NSMutableData, NSData;

@interface NEIKEv2SecurityContextAESGCM : NEIKEv2SecurityContext {
    NSMutableData *_encryptionContext;
    NSMutableData *_decryptionContext;
    NSData *_incomingEncryptionSalt;
}

- (void).cxx_destruct;
- (id)constructEncryptedPacketFromPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;

@end
