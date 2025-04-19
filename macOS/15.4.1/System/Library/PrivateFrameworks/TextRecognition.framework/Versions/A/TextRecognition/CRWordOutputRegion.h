@class CRNormalizedPolyline;

@interface CRWordOutputRegion : CROutputRegion {
    CRNormalizedPolyline *_baseline;
}

+ (id)wordWithCharacters:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;
+ (id)wordWithText:(id)a0 confidence:(unsigned long long)a1 quad:(id)a2 baselineAngle:(double)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)computesNumberOfLinesFromChildren;
- (id)contentBaselines;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)joiningDelimiter;

@end
