@class MADServiceTextAsset, NSString, MADTextRequest;

@interface MADServiceTextProcessingSubtask : NSObject <VCPMADTaskProtocol>

@property (readonly, nonatomic) MADTextRequest *request;
@property (readonly, nonatomic) MADServiceTextAsset *asset;
@property (copy, nonatomic) NSString *signpostPayload;

+ (id)subtaskForRequest:(id)a0 asset:(id)a1;

- (int)run;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (id)initWithRequest:(id)a0 asset:(id)a1;
- (float)resourceRequirement;

@end
