@class BKIdentity;
@protocol BKEnrollPearlOperationDelegate;

@interface BKEnrollPearlOperation : BKEnrollOperation

@property (weak, nonatomic) id<BKEnrollPearlOperationDelegate> delegate;
@property (nonatomic) long long enrollmentType;
@property (nonatomic) BOOL clientToComplete;
@property (retain, nonatomic) BKIdentity *augmentedIdentity;
@property (nonatomic) long long periocularGlassesRequirement;

- (void).cxx_destruct;
- (BOOL)completeWithError:(id *)a0;
- (BOOL)suspendWithError:(id *)a0;
- (BOOL)resumeWithError:(id *)a0;

@end
