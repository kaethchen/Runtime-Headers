@class NSArray, NSString, MADMultiModalRequest;

@interface MADMultiModalProcessingSubtask : NSObject <VCPMADTaskProtocol>

@property (readonly, nonatomic) MADMultiModalRequest *request;
@property (readonly, nonatomic) NSArray *inputs;
@property (copy, nonatomic) NSString *signpostPayload;

+ (BOOL)prewarmRequest:(id)a0 error:(id *)a1;
+ (id)subtaskForRequest:(id)a0 inputs:(id)a1;

- (int)run;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (id)initWithRequest:(id)a0 inputs:(id)a1;
- (float)resourceRequirement;

@end
