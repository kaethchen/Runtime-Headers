@class WFHarnessTestCase, NSURL, NSString;

@interface WFHarnessTestRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) BOOL holdingSecurityScopedAccess;
@property (retain, nonatomic) WFHarnessTestCase *testCase;
@property (readonly, nonatomic) NSURL *testBundleURL;
@property (readonly, copy, nonatomic) NSString *xcTestClass;
@property (readonly, copy, nonatomic) NSString *xcTestMethodName;
@property (readonly, copy, nonatomic) NSString *testIdentifier;
@property (readonly, nonatomic) BOOL shouldDisablePrivacyPrompts;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)createWorkflowWithEnvironment:(long long)a0 database:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTestBundleURL:(id)a0 xcTestClass:(id)a1 xcTestMethodName:(id)a2 testIdentifier:(id)a3;
- (id)loadTestCaseWithError:(id *)a0;
- (id)testMethodNamebyRemovingSuffixes:(id)a0;

@end
