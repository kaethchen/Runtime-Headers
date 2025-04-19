@class BKIdentity;
@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation

@property (weak, nonatomic) id<BKMatchPearlOperationDelegate> delegate;
@property (nonatomic) BOOL longTimeout;
@property (nonatomic) BOOL shouldAutoRetry;
@property (nonatomic) BOOL preAugmentationCheck;
@property (retain, nonatomic) BKIdentity *preAugmentationCheckIdentity;
@property (nonatomic) BOOL fullFaceOnly;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) BOOL nonDelayedIndicator;

- (void).cxx_destruct;
- (BOOL)enableAutoRetry:(BOOL)a0 error:(id *)a1;
- (BOOL)pauseFaceDetectTimer:(BOOL)a0 error:(id *)a1;
- (BOOL)startNewMatchAttemptWithError:(id *)a0;

@end
