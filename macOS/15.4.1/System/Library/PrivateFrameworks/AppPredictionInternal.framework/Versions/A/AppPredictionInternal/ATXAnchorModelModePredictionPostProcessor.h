@class NSArray, ATXAnchorModelPrediction, BMStream;

@interface ATXAnchorModelModePredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    BMStream *_modeStream;
}

@property (retain, nonatomic) NSArray *serializedTriggers;

- (void).cxx_destruct;
- (id)_triggerForAnchorType;
- (id)initWithAnchorModelPrediction:(id)a0;
- (BOOL)shouldPredictAnchorModelModePrediction;

@end
