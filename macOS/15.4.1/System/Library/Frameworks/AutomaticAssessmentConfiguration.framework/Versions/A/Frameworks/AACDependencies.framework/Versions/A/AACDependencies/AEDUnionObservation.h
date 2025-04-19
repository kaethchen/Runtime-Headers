@class NSArray;

@interface AEDUnionObservation : NSObject <AEDObservation> {
    NSArray *_observations;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;

@end
