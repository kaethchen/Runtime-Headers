@interface PPLocationAggScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)minScalarScoreIndex;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;

@end
