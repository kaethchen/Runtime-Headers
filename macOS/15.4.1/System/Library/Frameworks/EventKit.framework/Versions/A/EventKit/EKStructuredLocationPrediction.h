@interface EKStructuredLocationPrediction : NSObject

+ (id)_mockLocationForEvent:(id)a0;
+ (id)locationPredictionForEvent:(id)a0 error:(id *)a1 timeout:(double)a2;
+ (BOOL)shouldDoLocationPredictionForEvent:(id)a0;
+ (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1;

@end
