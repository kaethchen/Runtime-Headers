@interface PDAnimateRotateBehavior : PDAnimateBehavior {
    double mTo;
    double mFrom;
    double mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}

- (id)init;
- (double)from;
- (double)to;
- (void)setFrom:(double)a0;
- (void)setTo:(double)a0;
- (BOOL)hasFrom;
- (double)by;
- (BOOL)hasBy;
- (BOOL)hasTo;
- (void)setBy:(double)a0;

@end
