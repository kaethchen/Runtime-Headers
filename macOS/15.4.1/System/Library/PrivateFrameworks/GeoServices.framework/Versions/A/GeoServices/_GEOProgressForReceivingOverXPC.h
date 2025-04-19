@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _GEOProgressForReceivingOverXPC : NSProgress {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)cancel;
- (void)_handleEvent:(id)a0;
- (id)initVendingEndpoint:(id *)a0;

@end
