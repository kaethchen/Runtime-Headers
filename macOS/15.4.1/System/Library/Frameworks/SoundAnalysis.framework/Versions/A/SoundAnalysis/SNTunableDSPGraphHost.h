@interface SNTunableDSPGraphHost : NSObject {
    struct unique_ptr<AUProcessingBlock_DSPGraph, std::default_delete<AUProcessingBlock_DSPGraph>> { struct __compressed_pair<AUProcessingBlock_DSPGraph *, std::default_delete<AUProcessingBlock_DSPGraph>> { struct AUProcessingBlock_DSPGraph *__value_; } __ptr_; } _tuningHost;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGraph:(id)a0 error:(id *)a1;

@end
