@class NSArray;

@interface WFDropletRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) NSArray *fileURLs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithFileURLs:(id)a0;

@end
