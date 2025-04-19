@class NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MADMultiModalProcessingTask : VCPMABaseTask {
    NSArray *_requests;
    NSArray *_inputs;
    NSMutableArray *_subtasks;
    NSObject<OS_dispatch_queue> *_cancelQueue;
}

@property (retain, nonatomic) NSString *signpostPayload;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)run:(id *)a0;
- (BOOL)cachesResources;
- (id)initWithRequests:(id)a0 inputs:(id)a1 cancelBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
