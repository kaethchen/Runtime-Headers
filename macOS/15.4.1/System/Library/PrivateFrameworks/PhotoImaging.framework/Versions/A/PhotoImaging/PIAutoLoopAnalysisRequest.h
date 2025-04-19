@interface PIAutoLoopAnalysisRequest : NURenderRequest

@property (nonatomic) long long flavor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
