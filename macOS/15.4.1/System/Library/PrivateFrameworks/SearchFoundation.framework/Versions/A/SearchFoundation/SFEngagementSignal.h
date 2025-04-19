@class NSArray, NSDictionary, NSData, NSString, NSNumber;

@interface SFEngagementSignal : NSObject <SFEngagementSignal, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSNumber *serverScore;
@property (copy, nonatomic) NSNumber *localScore;
@property (copy, nonatomic) NSNumber *serverScoreConfidence;
@property (copy, nonatomic) NSNumber *localScoreConfidence;
@property (copy, nonatomic) NSArray *domainEngagementScores;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithVersion:(id)a0 serverScore:(id)a1 severScoreConfidence:(id)a2 localScore:(id)a3 localScoreConfidence:(id)a4 domainScores:(id)a5;

@end
