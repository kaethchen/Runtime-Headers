@interface MTRBaseClusterLevelControl : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCurrentFrequencyWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCurrentFrequencyWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCurrentLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCurrentLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeDefaultMoveRateWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeDefaultMoveRateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxFrequencyWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMaxFrequencyWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMaxLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMinFrequencyWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMinFrequencyWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMinLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMinLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOffTransitionTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOffTransitionTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOnLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOnLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOnOffTransitionTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOnOffTransitionTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOnTransitionTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOnTransitionTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOptionsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeOptionsWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeRemainingTimeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeRemainingTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeStartUpCurrentLevelWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeStartUpCurrentLevelWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (void)moveToClosestFrequencyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)moveToClosestFrequencyWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToLevelWithOnOffWithParams:(id)a0 completion:(id /* block */)a1;
- (void)moveToLevelWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToLevelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)moveToLevelWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveWithOnOffWithParams:(id)a0 completion:(id /* block */)a1;
- (void)moveWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveWithParams:(id)a0 completion:(id /* block */)a1;
- (void)moveWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeCurrentFrequencyWithCompletion:(id /* block */)a0;
- (void)readAttributeCurrentFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeCurrentLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeCurrentLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeDefaultMoveRateWithCompletion:(id /* block */)a0;
- (void)readAttributeDefaultMoveRateWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMaxFrequencyWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMaxLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMinFrequencyWithCompletion:(id /* block */)a0;
- (void)readAttributeMinFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeMinLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeMinLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOffTransitionTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeOffTransitionTimeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOnLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeOnLevelWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOnOffTransitionTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeOnOffTransitionTimeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOnTransitionTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeOnTransitionTimeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOptionsWithCompletion:(id /* block */)a0;
- (void)readAttributeOptionsWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeRemainingTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeRemainingTimeWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeStartUpCurrentLevelWithCompletion:(id /* block */)a0;
- (void)readAttributeStartUpCurrentLevelWithCompletionHandler:(id /* block */)a0;
- (void)stepWithOnOffWithParams:(id)a0 completion:(id /* block */)a1;
- (void)stepWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stepWithParams:(id)a0 completion:(id /* block */)a1;
- (void)stepWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithOnOffWithParams:(id)a0 completion:(id /* block */)a1;
- (void)stopWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithParams:(id)a0 completion:(id /* block */)a1;
- (void)stopWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCurrentFrequencyWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeCurrentFrequencyWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCurrentLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeCurrentLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeDefaultMoveRateWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeDefaultMoveRateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxFrequencyWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMaxFrequencyWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMaxLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMinFrequencyWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMinFrequencyWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMinLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeMinLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOffTransitionTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeOffTransitionTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOnLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeOnLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOnOffTransitionTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeOnOffTransitionTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOnTransitionTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeOnTransitionTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOptionsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeOptionsWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeRemainingTimeWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeRemainingTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeStartUpCurrentLevelWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)subscribeAttributeStartUpCurrentLevelWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeOnLevelWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeOnLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOnLevelWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeOnLevelWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeOptionsWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeOptionsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOptionsWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeOptionsWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 params:(id)a1 completionHandler:(id /* block */)a2;

@end
