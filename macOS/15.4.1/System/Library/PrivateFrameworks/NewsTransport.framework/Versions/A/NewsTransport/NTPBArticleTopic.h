@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface NTPBArticleTopic : PBCodable <NSCopying> {
    struct { unsigned char flowRate : 1; unsigned char ontologyLevel : 1; unsigned char quality : 1; unsigned char subscriptionRate : 1; unsigned char hardFollowRequiredForGrouping : 1; unsigned char isDisallowedFromGrouping : 1; unsigned char isEligibleForFoodGrouping : 1; unsigned char isEligibleForFoodGroupingIfAutofavorited : 1; unsigned char isEligibleForFoodGroupingIfFavorited : 1; unsigned char isEligibleForGrouping : 1; unsigned char isEligibleForGroupingIfAutofavorited : 1; unsigned char isEligibleForGroupingIfFavorited : 1; unsigned char isHidden : 1; unsigned char isManagedTopic : 1; unsigned char isManagedTopicWinner : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (readonly, nonatomic) BOOL hasCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL isEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited;
@property (readonly, nonatomic) BOOL hasConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL hasIsManagedTopic;
@property (nonatomic) BOOL isManagedTopic;
@property (nonatomic) BOOL hasIsManagedTopicWinner;
@property (nonatomic) BOOL isManagedTopicWinner;
@property (nonatomic) BOOL hasFlowRate;
@property (nonatomic) double flowRate;
@property (nonatomic) BOOL hasSubscriptionRate;
@property (nonatomic) double subscriptionRate;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) double quality;
@property (nonatomic) BOOL hasOntologyLevel;
@property (nonatomic) long long ontologyLevel;
@property (readonly, nonatomic) BOOL hasContentAndRelevanceInfo;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo *contentAndRelevanceInfo;
@property (nonatomic) BOOL hasIsDisallowedFromGrouping;
@property (nonatomic) BOOL isDisallowedFromGrouping;
@property (nonatomic) BOOL hasHardFollowRequiredForGrouping;
@property (nonatomic) BOOL hardFollowRequiredForGrouping;
@property (nonatomic) BOOL hasIsEligibleForFoodGrouping;
@property (nonatomic) BOOL isEligibleForFoodGrouping;
@property (nonatomic) BOOL hasIsEligibleForFoodGroupingIfFavorited;
@property (nonatomic) BOOL isEligibleForFoodGroupingIfFavorited;
@property (nonatomic) BOOL hasIsEligibleForFoodGroupingIfAutofavorited;
@property (nonatomic) BOOL isEligibleForFoodGroupingIfAutofavorited;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
