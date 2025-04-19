@interface PIAutoLoopAutoCalculator : NUAutoCalculator

@property (nonatomic) long long flavor;

+ (id)pipelineFilterForRevertedOriginal;
+ (id)pipelineFilterForUnRevertedOriginal;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;

@end
