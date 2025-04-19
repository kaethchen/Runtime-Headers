@protocol LipMovementVADDelegate;

@interface SDLipMovementVAD : NSObject

@property (readonly, nonatomic) double visualSpeechProbability;
@property (weak, nonatomic) id<LipMovementVADDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithModelFile:(id)a0;
- (void)addFaceTrackingData:(id)a0 atMachAbsTime:(unsigned long long)a1;

@end
