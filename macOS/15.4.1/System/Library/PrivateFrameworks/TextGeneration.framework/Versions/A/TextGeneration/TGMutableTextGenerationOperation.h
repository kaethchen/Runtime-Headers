@class TGTextGenerationOutputConstraint;

@interface TGMutableTextGenerationOperation : TGTextGenerationOperation

@property (copy) TGTextGenerationOutputConstraint *outputConstraint;
@property (getter=shouldProduceOutputStream) BOOL produceOutputStream;


@end
