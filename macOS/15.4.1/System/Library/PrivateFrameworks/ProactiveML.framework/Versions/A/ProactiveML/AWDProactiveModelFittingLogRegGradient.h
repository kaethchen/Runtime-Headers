@class AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingQuantizedDenseVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying> {
    struct { unsigned char iteration : 1; unsigned char timestamp : 1; unsigned char gradientL2norm : 1; unsigned char gradientScaleFactor : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatGradient;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (readonly, nonatomic) BOOL hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic) BOOL hasIteration;
@property (nonatomic) unsigned long long iteration;
@property (readonly, nonatomic) BOOL hasSparseQuantizedGradient;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient;
@property (nonatomic) BOOL hasGradientScaleFactor;
@property (nonatomic) float gradientScaleFactor;
@property (nonatomic) BOOL hasGradientL2norm;
@property (nonatomic) float gradientL2norm;
@property (readonly, nonatomic) BOOL hasDenseQuantizedGradient;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGradient;
- (unsigned long long)gradientLength;
- (float)gradientValueAtIndex:(unsigned long long)a0;

@end
