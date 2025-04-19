@interface GEOAPSequenceWaitState : GEOAPSequenceState {
    double _waitTime;
}

- (id)initWithName:(id)a0 waitTime:(double)a1;
- (unsigned long long)processUserAction:(int)a0 target:(int)a1 atTime:(double)a2;

@end
