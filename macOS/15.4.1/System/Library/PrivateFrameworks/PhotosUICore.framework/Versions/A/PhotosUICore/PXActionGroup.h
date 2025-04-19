@class NSArray, NSString;

@interface PXActionGroup : PXAction

@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *actionNameLocalizationKey;
@property (copy, nonatomic) NSString *localizedActionName;

- (id)init;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithActions:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (void)_performActionWithEnumerator:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performRedoWithEnumerator:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performUndoWithEnumerator:(id)a0 completionHandler:(id /* block */)a1;
- (void)performRedo:(id /* block */)a0;

@end
