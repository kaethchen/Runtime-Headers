@class NSString;

@interface ABUndoableCommandVisitor : NSObject <ABCommandVisitor>

@property (copy, nonatomic) id /* block */ didExecuteCommandWithSaveRequest;
@property (copy, nonatomic) id /* block */ didExecuteCommandWithCNSaveRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visitor;
+ (id)executeRedoVisitor;
+ (id)executeUndoVisitor;
+ (id)executeVisitor;

- (void).cxx_destruct;
- (void)visitCommand:(id)a0;
- (void)visitSaveCNRequestCommand:(id)a0;
- (void)visitSaveRequestCommand:(id)a0;
- (void)visitUndoableCommand:(id)a0;
- (void)visitUndoableSaveCNRequestCommand:(id)a0;
- (id)makeSaveRequest;
- (id)makeCNSaveRequest;
- (void)postProcessCNSaveRequest:(id)a0;
- (void)postProcessSaveRequest:(id)a0;

@end
