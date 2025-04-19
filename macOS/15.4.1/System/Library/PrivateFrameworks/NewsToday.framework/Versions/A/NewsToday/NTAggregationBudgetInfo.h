@class NTPBSectionSlotCostInfo;

@interface NTAggregationBudgetInfo : NSObject <NSCopying>

@property (copy, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo;
@property (nonatomic) unsigned long long embedsLimit;
@property (nonatomic) BOOL respectMinMaxLimit;
@property (nonatomic) double slotsLimit;
@property (nonatomic) BOOL allowSectionTitles;
@property (nonatomic) BOOL hasBannerSlotCost;
@property (nonatomic) double bannerSlotCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
