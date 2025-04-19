@class NSMutableDictionary;

@interface PXBlockActionManager : PXActionManager

@property (readonly, nonatomic) NSMutableDictionary *registeredActions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)supportsActionType:(id)a0;
- (void)registerActionForType:(id)a0 handler:(id /* block */)a1;
- (void)registerActionForType:(id)a0 title:(id)a1 image:(id)a2 handler:(id /* block */)a3;
- (void)registerActionWithConfiguration:(id)a0 forType:(id)a1;

@end
