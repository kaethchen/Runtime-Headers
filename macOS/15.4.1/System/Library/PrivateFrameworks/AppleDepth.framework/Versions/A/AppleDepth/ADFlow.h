@protocol ADFlowDelegate;

@interface ADFlow : NSObject {
    double _lastFrameTimestamp;
}

@property (retain, nonatomic) id<ADFlowDelegate> delegate;
@property (nonatomic) float maximalFrameRate;

- (void).cxx_destruct;
- (BOOL)shouldProcessMatch:(id)a0;

@end
