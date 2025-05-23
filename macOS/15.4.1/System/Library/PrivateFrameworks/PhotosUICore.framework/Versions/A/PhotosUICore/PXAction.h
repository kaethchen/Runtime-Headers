@class NSString;

@interface PXAction : NSObject

@property (readonly) BOOL executionStarted;
@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) NSString *actionNameLocalizationKey;
@property (readonly, nonatomic) NSString *undoMenuItemTitle;
@property (readonly, nonatomic) NSString *redoMenuItemTitle;
@property (readonly, nonatomic) NSString *localizedActionName;
@property (readonly, nonatomic) NSString *analyticsEventName;
@property (readonly, nonatomic) NSString *actionSystemImageName;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (void)_didPerformActionWithUndoManager:(id)a0 success:(BOOL)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)_performRedoWithUndoManager:(id)a0;
- (void)_performUndoWithUndoManager:(id)a0;
- (void)_registerRedoWithUndoManager:(id)a0;
- (void)_registerUndoWithUndoManager:(id)a0;
- (void)_unregisterFromUndoManager:(id)a0;
- (void)_updateNameWithUndoManager:(id)a0;
- (void)executeWithUndoManager:(id)a0 completionHandler:(id /* block */)a1;
- (void)performRedo:(id /* block */)a0;
- (void)registerWithUndoManager:(id)a0;
- (void)removeAllActionsFromUndoManager:(id)a0;

@end
