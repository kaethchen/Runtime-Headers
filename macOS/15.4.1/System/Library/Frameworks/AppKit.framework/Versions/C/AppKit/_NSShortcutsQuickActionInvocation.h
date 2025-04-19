@class WFContextualAction, NSString, _NSShortcutsQuickAction;
@protocol _NSQuickActionItemSource, NSServicesRequestor;

@interface _NSShortcutsQuickActionInvocation : NSObject <WFContextualActionRunnerClientDelegate> {
    id<_NSQuickActionItemSource> _itemSource;
    id<NSServicesRequestor> _requestor;
    WFContextualAction *_action;
    _NSShortcutsQuickAction *_quickAction;
    BOOL _notifiedWillPerform;
    _NSShortcutsQuickActionInvocation *_self;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)perform;
- (id)initWithItemSource:(id)a0 requestor:(id)a1 action:(id)a2 quickAction:(id)a3;
- (void)notifyWillPerformIfNeededWithProgress:(id)a0;
- (id)selectionItems;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutputFiles:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;

@end
