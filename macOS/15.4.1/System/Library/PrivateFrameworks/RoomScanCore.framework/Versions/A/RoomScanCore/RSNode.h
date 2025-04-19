@class NSArray;

@interface RSNode : NSObject

@property (readonly, nonatomic, getter=isSourceNode) BOOL sourceNode;
@property (readonly, nonatomic, getter=isSinkNode) BOOL sinkNode;
@property (readonly, copy, nonatomic) NSArray *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;

- (id)init;
- (void)removeInput:(id)a0;
- (void)removeOutput:(id)a0;
- (void)addOutput:(id)a0;
- (void)addInput:(id)a0;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromInput:(id)a1;

@end
