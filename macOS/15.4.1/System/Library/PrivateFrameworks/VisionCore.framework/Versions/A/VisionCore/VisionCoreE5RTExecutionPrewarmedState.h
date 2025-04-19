@interface VisionCoreE5RTExecutionPrewarmedState : NSObject {
    struct e5rt_execution_stream_operation { } *_executionStreamOperationHandle;
}

- (void)dealloc;
- (struct e5rt_execution_stream_operation { } *)acquireExecutionStreamOperationHandle;
- (id)initWithExecutionStreamOperation:(struct e5rt_execution_stream_operation { } *)a0;

@end
