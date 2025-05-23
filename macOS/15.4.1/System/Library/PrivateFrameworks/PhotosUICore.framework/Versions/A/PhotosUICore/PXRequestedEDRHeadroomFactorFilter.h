@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter

@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) double highValue;
@property (nonatomic) double lastDecreaseTime;
@property (nonatomic) double sustainDuration;

- (void)setInput:(double)a0;
- (id)initWithInput:(double)a0;
- (double)updatedOutput;

@end
