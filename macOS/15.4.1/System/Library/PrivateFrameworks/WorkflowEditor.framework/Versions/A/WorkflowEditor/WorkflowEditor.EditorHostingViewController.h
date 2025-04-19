@class WFWorkflow, WFAction;

@interface WorkflowEditor.EditorHostingViewController : NSViewController <WorkflowEditor.WorkflowEditorViewDelegate, WFWorkflowEditingDelegate> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ editorOptions;
    void /* unknown type, empty encoding */ editorResults;
    void /* unknown type, empty encoding */ actionList;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ runner;
    void /* unknown type, empty encoding */ coordinateSpaceName;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ auxiliaryViewPresenter;
    void /* unknown type, empty encoding */ titleBarSeparatorView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)appendAction:(id)a0 selectionAware:(BOOL)a1;
- (void)insertAction:(id)a0 at:(long long)a1;
- (void)insertActions:(id)a0 at:(long long)a1;
- (void)moveActionsFrom:(id)a0 to:(id)a1;
- (void)removeActions:(id)a0 mode:(long long)a1;
- (void)workflow:(id)a0 insertActions:(id)a1 atIndexes:(id)a2;
- (void)workflow:(id)a0 moveActionsAtIndexes:(id)a1 toIndexes:(id)a2;
- (void)workflow:(WFWorkflow *)a0 removeAction:(WFAction *)a1 completionHandler:(void (^)(BOOL))a2;

@end
