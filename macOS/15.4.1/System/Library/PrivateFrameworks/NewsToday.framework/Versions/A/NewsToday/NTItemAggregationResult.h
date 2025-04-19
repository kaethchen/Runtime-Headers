@class NSDictionary, NSSet;

@interface NTItemAggregationResult : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (copy, nonatomic) NSSet *unusedSectionDescriptors;
@property (nonatomic) double slotsUsed;
@property (nonatomic) double headlineScale;
@property (readonly, nonatomic) unsigned long long itemCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithHeadlineScale:(double)a0;
- (double)headlineSlotCostWithSlotCost:(double)a0;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)a0 unusedSectionDescriptors:(id)a1;
- (double)sectionOverheadSlotCostWithInfo:(id)a0;
- (double)slotCostWithInfo:(id)a0;

@end
