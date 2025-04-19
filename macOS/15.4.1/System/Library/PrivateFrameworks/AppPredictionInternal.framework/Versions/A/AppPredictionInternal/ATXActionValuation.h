@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)getCurrentLocation;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (BOOL)shouldPredictSendMessageIntent:(id)a0;
- (id)initWithIntentCache:(id)a0;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (BOOL)shouldPredictIntent:(id)a0;

@end
