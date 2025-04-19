@interface _EAREuclid : NSObject {
    struct unique_ptr<quasar::QuasarEuclid, std::default_delete<quasar::QuasarEuclid>> { struct __compressed_pair<quasar::QuasarEuclid *, std::default_delete<quasar::QuasarEuclid>> { struct QuasarEuclid *__value_; } __ptr_; } _quasarEuclid;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)majorVersion;
- (id)minorVersion;
- (id)patchVersion;
- (id)maxInputLength;
- (id)computeEmbedding:(id)a0;
- (id)computeEmbeddings:(id)a0;
- (id)distanceBetweenSource:(id)a0 target:(id)a1;
- (id)embeddingDim;
- (id)findNearestNeighbors:(id)a0 numberOfNeighbors:(long long)a1;
- (id)fullVersion;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1 initFlag:(long long)a2;
- (id)initWithConfiguration:(id)a0 euclidEncoderType:(long long)a1 initFlag:(long long)a2 overrides:(id)a3;

@end
