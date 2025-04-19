@class NSArray, NSString;

@interface EDMessageCategorizationResultMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double senderScore;
@property (readonly, nonatomic) double tsScore;
@property (readonly, nonatomic) NSArray *reasonCodes;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *senderModelVersion;
@property (readonly, nonatomic) NSString *tsModelVersion;
@property (readonly, nonatomic) NSString *finalRuleVersion;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *experimentDeploymentID;
@property (readonly, nonatomic) NSString *experimentTreatmentID;
@property (readonly, nonatomic) NSString *rolloutID;
@property (readonly, nonatomic) NSString *rolloutDeploymentID;
@property (readonly, nonatomic) NSString *rolloutFactorPackID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithScore:(double)a0 senderScore:(double)a1 tsScore:(double)a2 reasonCodes:(id)a3 modelVersion:(id)a4 senderModelVersion:(id)a5 tsModelVersion:(id)a6 finalRuleVersion:(id)a7 experimentID:(id)a8 experimentDeploymentID:(id)a9 experimentTreatmentID:(id)a10 rolloutID:(id)a11 rolloutDeploymentID:(id)a12 rolloutFactorPackID:(id)a13;
- (id)stringRepresentationWithError:(id *)a0;

@end
