@class ATXHomeScreenEvent, NSArray, NSString, NSMutableDictionary, NSDate, ATXPredictionContext, ATXBlendingLayerHyperParameters;
@protocol ATXPETEventTracker2Protocol;

@interface ATXBlendingLayerSessionLogger : NSObject <ATXBlendingLayerSessionLoggerProtocol> {
    NSMutableDictionary *_mostRecentBlendingCacheUpdateByConsumerSubType;
    ATXPredictionContext *_mostRecentPredictionContext;
    ATXHomeScreenEvent *_mostRecentScreenLockEvent;
    id<ATXPETEventTracker2Protocol> _tracker;
    ATXBlendingLayerHyperParameters *_hyperParameters;
}

@property (retain, nonatomic) NSArray *uiEvents;
@property (retain, nonatomic) NSArray *ermEvents;
@property (retain, nonatomic) NSArray *blendingEvents;
@property (retain, nonatomic) NSArray *clientModelEvents;
@property (retain, nonatomic) NSArray *predictionContextEvents;
@property (retain, nonatomic) NSDate *now;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)sessionUICacheForUICacheUpdate:(id)a0;
- (id)clientModelCacheUpdatesFromBlendingCacheUpdate:(id)a0;
- (id)clientModelPublisher;
- (id)generateSessionLog;
- (id)initWithTracker:(id)a0 hyperParameters:(id)a1;
- (int)locationTypeFromLocationOfInterest:(id)a0;
- (BOOL)logCurrentSessionIfPossible;
- (void)logSessionLogToPET:(id)a0;
- (id)orderedMergeERMBlendingContextUIPublisher;
- (id)sessionBlendingUpdateFromBlendingUICacheUpdate:(id)a0 deviceContext:(id)a1;
- (id)sessionClientModelUpdatesForUICacheUpdate:(id)a0;
- (id)sessionDeviceContextFromPredictionContext:(id)a0;
- (id)sessionERMEventFromERMEvent:(id)a0;
- (id)sessionSuggestionFromProactiveSuggestion:(id)a0;
- (BOOL)shouldLogSession;

@end
