@class NSString, CPLSyncSessionPrediction, NSHashTable;

@interface CPLSyncSessionPredictor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) CPLSyncSessionPrediction *currentPrediction;

- (id)description;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)updatePredictedValue:(id)a0 forType:(id)a1;
- (void)updatePredictionWithValuesAndTypes:(id)a0;
- (void)updatePredictionsWithDerivativesStatistics:(id)a0;

@end
