@class WFHarnessTestRunDescriptor;

@interface WFHarnessTestRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) WFHarnessTestRunDescriptor *testRunDescriptor;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithTestBundleURL:(id)a0 xcTestClass:(id)a1 xcTestMethodName:(id)a2 testIdentifier:(id)a3 automationType:(id)a4;

@end
