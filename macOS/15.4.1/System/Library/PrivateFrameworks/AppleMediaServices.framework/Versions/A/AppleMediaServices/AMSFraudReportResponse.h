@class NSData, NSString;

@interface AMSFraudReportResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *proofData;
@property (readonly, nonatomic) NSData *evaluatedElementData;
@property (copy, nonatomic) NSString *proof;
@property (copy, nonatomic) NSString *evaluatedElement;
@property (readonly, nonatomic) NSString *nameSpace;
@property (readonly, nonatomic) long long reportedScore;
@property (readonly, nonatomic) long long newScore;
@property (readonly, nonatomic) NSString *finalizedElement;
@property (readonly, nonatomic) NSString *keyID;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setKeyID:(id)a0;
- (void)_setFinalizedElement:(id)a0;
- (id)initWithNamespace:(id)a0 reportedScore:(unsigned char)a1 newScore:(unsigned char)a2 evaluatedElementData:(id)a3 proofData:(id)a4 keyID:(id)a5;
- (id)initWithResponseDictionary:(id)a0 expectedNamespace:(id)a1 expectedReportedScore:(unsigned char)a2 keyID:(id)a3 error:(id *)a4;
- (id)initWithURLResult:(id)a0 keyID:(id)a1;
- (void)setFinalizedElement:(id)a0;
- (void)setNameSpace:(id)a0;
- (void)setNewScore:(long long)a0;
- (void)setReportedScore:(long long)a0;

@end
