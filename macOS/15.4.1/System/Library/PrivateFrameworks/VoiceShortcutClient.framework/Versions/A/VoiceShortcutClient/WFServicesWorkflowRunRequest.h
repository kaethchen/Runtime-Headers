@class NSString, FPSandboxingURLWrapper, NSURL, NSPasteboard;

@interface WFServicesWorkflowRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) NSString *inputPasteboardName;
@property (readonly, nonatomic) FPSandboxingURLWrapper *finderRootWrapper;
@property (readonly, nonatomic) NSPasteboard *pasteboard;
@property (readonly, nonatomic) NSURL *finderRoot;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithInputPasteboardName:(id)a0;

@end
