@class NSUUID, NSArray;

@interface CPSimulatedDataCryptor : NSObject <CPDataCryptor> {
    void /* unknown type, empty encoding */ encryptionKeyID;
    void /* unknown type, empty encoding */ decryptionKeyIDSet;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSUUID *encryptionKeyID;
@property (nonatomic, copy) NSArray *decryptionKeyIDSet;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decryptData:(id)a0 keyID:(id)a1 seqNum:(unsigned long long)a2 error:(id *)a3;
- (id)encryptData:(id)a0 seqNum:(unsigned long long)a1 error:(id *)a2;

@end
