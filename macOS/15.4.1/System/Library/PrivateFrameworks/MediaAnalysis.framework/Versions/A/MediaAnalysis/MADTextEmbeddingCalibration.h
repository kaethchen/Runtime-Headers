@class NSObject;
@protocol OS_dispatch_queue;

@interface MADTextEmbeddingCalibration : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _meanBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _standardDeviationBuffer;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _inputBuffer;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)loadResources;
- (int)_createPlan;
- (int)_loadResources;
- (int)_processEmbedding:(id)a0 version:(unsigned long long)a1 typeSize:(unsigned long long)a2 mean:(float *)a3 standardDeviation:(float *)a4;
- (int)processEmbedding:(id)a0 mean:(float *)a1 standardDeviation:(float *)a2;
- (int)processEmbedding:(id)a0 version:(unsigned long long)a1 typeSize:(unsigned long long)a2 mean:(float *)a3 standardDeviation:(float *)a4;

@end
