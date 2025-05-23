@class NSUUID, KTVerifierResult;

@interface IDSIDKTData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *verificationRequestID;
@property (readonly, copy, nonatomic) KTVerifierResult *verifierResult;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVerifierResult:(id)a0 requestID:(id)a1;

@end
