@class NSMutableDictionary;

@interface ATXCategoricalAttributeBreakdown : NSObject {
    NSMutableDictionary *_counts;
}

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allCategories;
- (unsigned long long)countForCategory:(id)a0;
- (void)incrementCountForCategory:(id)a0 by:(unsigned long long)a1;
- (BOOL)isEqualToATXDeviceLevelMetricsCategoricalAttributeBreakdown:(id)a0;
- (double)normalizedCountForCategory:(id)a0;

@end
