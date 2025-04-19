@class NSString, NSDictionary, NSData, NSNumber;

@interface SFCoreSpotlightRankingSignals : NSObject <SFCoreSpotlightRankingSignals, NSSecureCoding, NSCopying> {
    struct { unsigned char wasNominatedAsTopHit : 1; unsigned char isExactMatchOfLaunchString : 1; unsigned char wasEngagedInSpotlight : 1; unsigned char resultQueryRecency : 1; unsigned char isSemanticMatch : 1; unsigned char isSyntacticMatch : 1; unsigned char embeddingStatus : 1; unsigned char itemAgeInDays : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *topicalityScore;
@property (copy, nonatomic) NSNumber *freshness;
@property (copy, nonatomic) NSNumber *engagementScore;
@property (copy, nonatomic) NSNumber *predictedLikelihoodOfEngagement;
@property (nonatomic) BOOL wasNominatedAsTopHit;
@property (copy, nonatomic) NSNumber *sodiumL2Score;
@property (nonatomic) BOOL isExactMatchOfLaunchString;
@property (nonatomic) BOOL wasEngagedInSpotlight;
@property (nonatomic) int resultQueryRecency;
@property (copy, nonatomic) NSNumber *pommesL2Score;
@property (nonatomic) BOOL isSemanticMatch;
@property (copy, nonatomic) NSNumber *semanticScore;
@property (nonatomic) BOOL isSyntacticMatch;
@property (copy, nonatomic) NSNumber *syntacticScore;
@property (nonatomic) int embeddingStatus;
@property (nonatomic) unsigned long long itemAgeInDays;
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
- (BOOL)hasEmbeddingStatus;
- (BOOL)hasIsExactMatchOfLaunchString;
- (BOOL)hasIsSemanticMatch;
- (BOOL)hasIsSyntacticMatch;
- (BOOL)hasItemAgeInDays;
- (BOOL)hasResultQueryRecency;
- (BOOL)hasWasEngagedInSpotlight;
- (BOOL)hasWasNominatedAsTopHit;

@end
