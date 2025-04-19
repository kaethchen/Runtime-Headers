@class NSData, NSDictionary;

@interface WFAllActionOutputsRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) NSData *archivedOutputs;
@property (copy, nonatomic) NSDictionary *cachedOutputs;
@property (readonly, nonatomic) BOOL hasOutputs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActionOutputs:(id)a0 runError:(id)a1;
- (void)generateOutputsFromRepresentation:(id)a0 withCompletion:(id /* block */)a1;
- (void)getActionOutputsWithCompletionHandler:(id /* block */)a0;
- (id)unableToDecodeError;

@end
