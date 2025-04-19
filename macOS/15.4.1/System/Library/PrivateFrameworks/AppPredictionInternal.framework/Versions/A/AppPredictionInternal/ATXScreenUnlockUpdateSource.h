@class ATXCoreDuetContextHelper;
@protocol ATXPredictionContextBuilderProtocol, ATXUpdatePredictionsDelegate;

@interface ATXScreenUnlockUpdateSource : NSObject <ATXUpdatePredictionsSource>

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (retain, nonatomic) ATXCoreDuetContextHelper *contextHelper;
@property (retain, nonatomic) id<ATXPredictionContextBuilderProtocol> predictionContextBuilder;

- (id)init;
- (void).cxx_destruct;
- (void)_handleScreenUnlockEvent;
- (void)_listenForScreenUnlock;
- (id)initWithContextHelper:(id)a0 predictionContextBuilder:(id)a1;

@end
