@class ATXModeAnchorModelSuggestionClient, NSString, ATXAnchorModelHyperParameters, ATXProactiveSuggestionClientModel;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

@interface ATXAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol> {
    id<ATXAnchorModelDataStoreWrapperProtocol> _storeWrapper;
    ATXAnchorModelHyperParameters *_hyperParameters;
    ATXModeAnchorModelSuggestionClient *_modeSuggestionClient;
}

@property (retain, nonatomic) ATXProactiveSuggestionClientModel *anchorModelClientModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)clientModelId;
- (id)initWithAnchorModelDataStoreWrapper:(id)a0 anchorModelHyperParameters:(id)a1;
- (id)clientModelSpec;
- (id)actionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (id)appAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (void)forwardModePredictions:(id)a0;
- (void)forwardNonModePredictions:(id)a0;
- (void)forwardPredictionTuplesToBlendingLayer:(id)a0 feedbackMetadata:(id)a1;
- (void)forwardPredictions:(id)a0;
- (id)linkActionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)a0;
- (id)modeAnchorModelSuggestionsFromPredictions:(id)a0;

@end
