@interface _CUIPSDStopAndMidpointPair : NSObject {
    id stop;
    double midpoint;
}

- (void)dealloc;
- (long long)compare:(id)a0;
- (id)stop;
- (id)initWithStop:(id)a0 midpoint:(id)a1;
- (double)midpoint;

@end
