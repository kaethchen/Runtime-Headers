@protocol SiriUIHeaterDelegate;

@interface SiriUIHeater : NSObject

@property (nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime;
@property (weak, nonatomic) id<SiriUIHeaterDelegate> delegate;

- (void).cxx_destruct;
- (void)_suggestPreheat;
- (void)_suggestDefrost;
- (void)prepareForUseAfterTimeInterval:(double)a0;
- (void)_cancelPreparation;
- (void)cancelPreparation;

@end
