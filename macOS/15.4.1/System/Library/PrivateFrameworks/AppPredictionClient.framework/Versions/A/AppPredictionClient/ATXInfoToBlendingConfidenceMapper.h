@class NSDictionary;

@interface ATXInfoToBlendingConfidenceMapper : NSObject {
    NSDictionary *_map;
}

- (id)init;
- (void).cxx_destruct;
- (long long)blendingConfidenceCategoryForInfoConfidenceLevel:(long long)a0;
- (long long)minInfoConfidenceLevelForBlendingConfidenceCategory:(long long)a0;

@end
