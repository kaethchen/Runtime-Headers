@interface MNNavigationStateGuidanceTurnByTurn : MNNavigationStateGuidance

- (unsigned long long)type;
- (void)postEnterState;
- (void)setFullGuidanceMode:(BOOL)a0;
- (void)setGuidanceType:(unsigned long long)a0;

@end
