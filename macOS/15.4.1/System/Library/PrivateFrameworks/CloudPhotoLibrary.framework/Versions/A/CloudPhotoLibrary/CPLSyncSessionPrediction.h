@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)redactedDescription;
- (id)initWithPredictedValuesAndTypes:(id)a0;
- (id)predictedValueForType:(id)a0;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;

@end
