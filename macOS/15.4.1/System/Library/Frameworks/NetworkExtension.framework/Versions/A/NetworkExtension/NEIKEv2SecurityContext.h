@interface NEIKEv2SecurityContext : NSObject {
    unsigned int _minimumEncryptedPayloadSize;
}

- (id)constructEncryptedPacketFromPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (unsigned int)maximumPayloadSizeWithinLimit:(unsigned int)a0;
- (unsigned int)overheadForPlaintextLength:(unsigned int)a0;

@end
