@class AMWorkflowController, NSString, NSURL, NSPasteboard;

@interface AMWorkflowServiceRunner : NSObject <AMWorkflowControllerDelegatePrivate>

@property (retain) NSURL *workflowURL;
@property (retain) NSPasteboard *pasteboard;
@property (retain) AMWorkflowController *controller;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)presentError:(id)a0;
- (void)completeWorkflowRunWithController:(id)a0 workflowResult:(id)a1 error:(id)a2;
- (BOOL)getInputFromPasteBoard:(id *)a0 serviceMetaData:(id)a1 error:(id *)a2;
- (id)initWithWorkflowURL:(id)a0 pasteboardName:(id)a1;
- (id)processInput:(id)a0 serviceMetaData:(id)a1 error:(id *)a2;
- (void)runWorkflowWithCompletionBlock:(id /* block */)a0 completionQueue:(id)a1;
- (void)workflowController:(id)a0 didError:(id)a1;
- (void)workflowControllerDidRun:(id)a0;
- (void)workflowControllerDidStop:(id)a0;
- (BOOL)writeOutputToPasteBoard:(id)a0 serviceMetaData:(id)a1 error:(id *)a2;

@end
