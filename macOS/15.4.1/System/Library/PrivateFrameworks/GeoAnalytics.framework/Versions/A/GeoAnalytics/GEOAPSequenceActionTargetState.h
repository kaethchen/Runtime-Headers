@class NSMutableArray;

@interface GEOAPSequenceActionTargetState : GEOAPSequenceState {
    NSMutableArray *_admissionPairs;
}

@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)addAdmissionUserAction:(int)a0 target:(int)a1;
- (BOOL)didTimeoutAt:(double)a0;
- (id)initWithName:(id)a0 admissionUserAction:(int)a1 target:(int)a2;
- (unsigned long long)processUserAction:(int)a0 target:(int)a1 atTime:(double)a2;

@end
