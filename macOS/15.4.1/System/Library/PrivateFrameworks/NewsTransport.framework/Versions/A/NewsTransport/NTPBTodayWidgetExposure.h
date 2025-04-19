@class NSString, NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {
    struct { unsigned char contentFetchDate : 1; unsigned char widgetAppearanceType : 1; unsigned char widgetArticleCount : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetHeadlineExposureCount : 1; unsigned char widgetType : 1; } _has;
}

@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) BOOL hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetHeadlineExposureCount;
@property (retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs;
@property (retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs;
@property (nonatomic) BOOL hasWidgetAppearanceType;
@property (nonatomic) int widgetAppearanceType;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (nonatomic) BOOL hasContentFetchDate;
@property (nonatomic) long long contentFetchDate;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetType;
@property (nonatomic) int widgetType;
@property (readonly, nonatomic) BOOL hasEntryId;
@property (retain, nonatomic) NSString *entryId;
@property (readonly, nonatomic) BOOL hasBannerIdentifier;
@property (retain, nonatomic) NSString *bannerIdentifier;

+ (Class)widgetPersonalizationFeatureCTRPairType;
+ (Class)widgetSectionsArticleCountPairType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWidgetType:(id)a0;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)a0;
- (void)addWidgetSectionsArticleCountPair:(id)a0;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (void)clearWidgetSectionsArticleCountPairs;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
- (id)widgetTypeAsString:(int)a0;

@end
