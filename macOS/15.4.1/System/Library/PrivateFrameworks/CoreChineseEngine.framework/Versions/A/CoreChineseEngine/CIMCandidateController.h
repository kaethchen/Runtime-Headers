@interface CIMCandidateController : IMKCandidates

@property (nonatomic) BOOL showCandidatesAtEndOfCompletion;
@property (readonly, nonatomic) BOOL shouldClose;

- (void)hide;
- (BOOL)isVisible;
- (void)show:(unsigned long long)a0;
- (void)deferredHide;

@end
