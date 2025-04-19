@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MADTextEmbeddingSafety : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _inputBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputBuffer;
}

@property (class, readonly, nonatomic) NSString *modelName;
@property (class, readonly, nonatomic) unsigned long long embeddingVersion;
@property (class, readonly, nonatomic) unsigned long long embeddingLength;
@property (class, readonly, nonatomic) float threshold;

+ (id)createForEmbeddingVersion:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)loadResources;
- (int)_createPlan;
- (int)_loadResources;
- (int)_processEmbedding:(id)a0 safetyScore:(float *)a1 isSafe:(BOOL *)a2;
- (int)processEmbedding:(id)a0 safetyScore:(float *)a1 isSafe:(BOOL *)a2;

@end
