@class NSString, NSData;

@interface TPVoucher : NSObject

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSString *beneficiaryID;
@property (retain, nonatomic) NSString *sponsorID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *sig;

+ (id)voucherWithReason:(unsigned long long)a0 beneficiaryID:(id)a1 sponsorID:(id)a2 signingKeyPair:(id)a3 error:(id *)a4;
+ (id)voucherInfoWithData:(id)a0 sig:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToVoucher:(id)a0;
- (BOOL)checkSignatureWithKey:(id)a0;
- (id)createRecoveryECPublicKey:(id)a0;
- (id)initWithObj:(id)a0 data:(id)a1 sig:(id)a2;

@end
