@interface PDCmdBehavior : PDAnimateBehavior {
    BOOL mHasBehaviorType;
    int mBehaviorType;
}

- (BOOL)hasBehaviorType;
- (int)behaviorType;
- (void)setBehaviorType:(int)a0;

@end
