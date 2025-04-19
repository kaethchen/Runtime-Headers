@class NSMutableDictionary;

@interface _PSInteractionsStatisticsFeatureProvider : NSObject {
    NSMutableDictionary *_mlFeatures;
}

- (void).cxx_destruct;
- (id)mlFeatures;
- (id)initWithInteractionsStatistics:(id)a0;
- (id)featureValueForFeature:(id)a0 forConversationId:(id)a1;
- (id)mlFeaturesForConversationId:(id)a0;

@end
