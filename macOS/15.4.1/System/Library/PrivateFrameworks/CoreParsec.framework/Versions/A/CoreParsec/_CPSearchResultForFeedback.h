@class NSData, NSString, _CPCoreSpotlightRankingSignalsForFeedback, _CPPunchoutForFeedback, _CPStruct, _CPPhotosAggregatedInfo, _CPMailRankingSignalsForFeedback, _CPMailResultDetailsForFeedback, _CPSafariAttributes, _CPPhotosAttributes, _CPCardForFeedback, _CPActionItemForFeedback;
@protocol NSCopying;

@interface _CPSearchResultForFeedback : PBCodable <_CPSearchResultForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id<NSCopying> jsonIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonResultBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonSectionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *jsonApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int topHit;
@property (retain, nonatomic) _CPActionItemForFeedback *action;
@property (retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property (nonatomic) int type;
@property (retain, nonatomic) _CPStruct *localFeatures;
@property (copy, nonatomic) NSString *resultType;
@property (nonatomic) double rankingScore;
@property (nonatomic) BOOL isStaticCorrection;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *intendedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *completedQuery;
@property (nonatomic) BOOL isLocalApplicationResult;
@property (nonatomic) BOOL publiclyIndexable;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *userInput;
@property (nonatomic) BOOL isFuzzyMatch;
@property (nonatomic) BOOL doNotFold;
@property (nonatomic) unsigned long long blockId;
@property (nonatomic) unsigned long long hashedIdentifier;
@property (copy, nonatomic) NSString *resultBundleId;
@property (nonatomic) int knownResultBundleId;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (nonatomic) int knownSectionBundleIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (nonatomic) int knownApplicationBundleIdentifier;
@property (copy, nonatomic) NSData *entityData;
@property (nonatomic) BOOL shouldUseCompactDisplay;
@property (nonatomic) BOOL noGoTakeover;
@property (nonatomic) BOOL preferTopPlatter;
@property (nonatomic) BOOL wasCompact;
@property (nonatomic) BOOL didTakeoverGo;
@property (nonatomic) BOOL usesCompactDisplay;
@property (nonatomic) BOOL isInstantAnswer;
@property (nonatomic) BOOL shouldAutoNavigate;
@property (retain, nonatomic) _CPCardForFeedback *card;
@property (retain, nonatomic) _CPCardForFeedback *inlineCard;
@property (retain, nonatomic) _CPCardForFeedback *compactCard;
@property (nonatomic) BOOL containsPersonalResult;
@property (nonatomic) BOOL didRerankPersonalResult;
@property (nonatomic) int coreSpotlightIndexUsed;
@property (nonatomic) int coreSpotlightIndexUsedReason;
@property (retain, nonatomic) _CPCoreSpotlightRankingSignalsForFeedback *coreSpotlightRankingSignals;
@property (retain, nonatomic) _CPMailRankingSignalsForFeedback *mailRankingSignals;
@property (retain, nonatomic) _CPMailResultDetailsForFeedback *mailResultDetails;
@property (nonatomic) BOOL isVideoAssetFromPhotos;
@property (nonatomic) BOOL isMailInstantAnswerUpdated;
@property (nonatomic) int indexOfSectionWhenRanked;
@property (nonatomic) int indexOfResultInSectionWhenRanked;
@property (retain, nonatomic) _CPSafariAttributes *safariAttributes;
@property (nonatomic) BOOL hasAppTopHitShortcut;
@property (retain, nonatomic) _CPPhotosAttributes *photosAttributes;
@property (retain, nonatomic) _CPPhotosAggregatedInfo *photosAggregatedInfo;
@property (nonatomic) int thirdPartyQueryCompletionMatched;
@property (nonatomic) float thirdPartyNavigationIntentScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResultbundleidentifier;
@property (readonly, nonatomic) unsigned long long whichSectionbundleid;
@property (readonly, nonatomic) unsigned long long whichApplicationbundleid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)clearApplicationbundleid;
- (void)clearResultbundleidentifier;
- (void)clearSectionbundleid;
- (unsigned long long)typeForPQC;

@end
