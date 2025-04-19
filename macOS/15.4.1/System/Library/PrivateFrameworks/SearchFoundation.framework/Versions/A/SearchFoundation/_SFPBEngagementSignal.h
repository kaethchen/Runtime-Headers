@class NSArray, NSData, NSString;

@interface _SFPBEngagementSignal : PBCodable <_SFPBEngagementSignal, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int version;
@property (nonatomic) float serverScore;
@property (nonatomic) float localScore;
@property (nonatomic) int serverScoreConfidence;
@property (nonatomic) int localScoreConfidence;
@property (copy, nonatomic) NSArray *domainEngagementScores;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addDomainEngagementScores:(id)a0;
- (void)clearDomainEngagementScores;
- (id)domainEngagementScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)domainEngagementScoresCount;

@end
