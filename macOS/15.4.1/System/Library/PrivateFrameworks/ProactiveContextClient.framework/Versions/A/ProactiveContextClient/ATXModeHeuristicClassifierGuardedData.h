@class NSDate, NSMutableArray, ATXModeFeatureSet;

@interface ATXModeHeuristicClassifierGuardedData : NSObject {
    ATXModeFeatureSet *_aggregateFeatures;
    NSDate *_lastFeatureUpdateDate;
    NSMutableArray *_featureBuffer;
    int _mode;
}

- (void).cxx_destruct;

@end
