@class SFQueryUnderstandingParse, SFPhotosRankingInfo;

@interface SFEndLocalSearchFeedback : SFEndSearchFeedback

@property (retain, nonatomic) SFQueryUnderstandingParse *quParse;
@property (nonatomic) unsigned int l1ToL2ResultCount;
@property (nonatomic) unsigned int coreSpotlightIndexCount;
@property (retain, nonatomic) SFPhotosRankingInfo *photosRankingInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0;
- (id)initWithStartSearch:(id)a0 queryUnderstandingParse:(id)a1;
- (id)initWithStartSearch:(id)a0 queryUnderstandingParse:(id)a1 l1ToL2ResultCount:(unsigned int)a2 coreSpotlightIndexCount:(unsigned int)a3;

@end
