@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    BOOL mHasCalcMode;
    int mCalcMode;
    BOOL mHasValueType;
    int mValueType;
}

- (id)init;
- (void).cxx_destruct;
- (int)valueType;
- (void)setValueType:(int)a0;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (BOOL)hasValueType;
- (void)setTo:(id)a0;
- (id)by;
- (int)calcMode;
- (BOOL)hasCalcMode;
- (void)setBy:(id)a0;
- (void)setCalcMode:(int)a0;

@end
