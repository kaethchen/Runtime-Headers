@interface VCPEspressoV2IOPort : NSObject

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) struct e5rt_buffer_object { } *bufferHandle;
@property (readonly) long long tensorType;

- (void)dealloc;
- (unsigned long long)getOutput:(void **)a0;
- (unsigned long long)getTensorShape;
- (long long)getTensorType:(struct e5rt_tensor_desc { } *)a0;
- (int)prepareInput:(void *)a0;
- (int)retainAndBindToPort:(struct e5rt_execution_stream_operation { } *)a0 name:(id)a1 isInput:(BOOL)a2;

@end
