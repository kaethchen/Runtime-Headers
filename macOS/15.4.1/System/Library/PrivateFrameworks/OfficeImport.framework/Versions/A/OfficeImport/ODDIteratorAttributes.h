@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (unsigned int)count;
- (int)start;
- (void)setCount:(unsigned int)a0;
- (int)step;
- (int)axis;
- (void)setAxis:(int)a0;
- (void)setStart:(int)a0;
- (int)pointType;
- (void)setStep:(int)a0;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;
- (void)setPointType:(int)a0;

@end
