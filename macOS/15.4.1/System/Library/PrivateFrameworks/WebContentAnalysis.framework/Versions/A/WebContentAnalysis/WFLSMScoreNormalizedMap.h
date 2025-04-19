@interface WFLSMScoreNormalizedMap : WFLSMMap {
    float *maxScore;
    float *minScore;
}

- (void)dealloc;
- (id)initWithMap:(struct __LSMMap { } *)a0;
- (id)evaluate:(id)a0;

@end
