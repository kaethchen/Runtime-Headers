@class SFSymmetricEncryptionOperation;

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {
    id _cmacOperationInternal;
}

@property (copy, nonatomic) SFSymmetricEncryptionOperation *encryptionOperation;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEncryptionOperation:(id)a0;

@end
