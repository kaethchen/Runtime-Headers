@class AKPVSignaturePayload, NSData;

@interface PVDummySignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL cannotDecrypt;
@property (retain) AKPVSignaturePayload *payload;
@property (retain) NSData *undecryptedData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)decrypt;
- (BOOL)isDecrypted;

@end
