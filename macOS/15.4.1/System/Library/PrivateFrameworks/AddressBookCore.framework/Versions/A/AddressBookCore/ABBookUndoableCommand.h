@class NSString;

@interface ABBookUndoableCommand : ABBookCommand <ABUndoableCommand>

@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionName;
- (void)execute;
- (void)executeRedo;
- (void)executeUndo;
- (void)visit:(id)a0;

@end
