@class NSString;

@interface TTRUndoManager : NSUndoManager

@property (copy, nonatomic) NSString *debugIdentifier;
@property (nonatomic) BOOL shouldSuppressWillRegisterUndoNotifications;
@property (nonatomic) BOOL disableRemoveAllActions;
@property (readonly, nonatomic) NSString *debug_undoStackDescription;
@property (readonly, nonatomic) NSString *debug_redoStackDescription;

+ (void)withActionName:(id)a0 block:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (void)registerUndoWithTarget:(id)a0 handler:(id /* block */)a1;
- (void)registerUndoWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)removeAllActions;
- (void)_prepareToRegisterUndo;
- (void)_registerLogUserAction:(id)a0;
- (id)initWithDebugIdentifier:(id)a0;

@end
