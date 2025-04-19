@class NSArray;

@interface PKUndoGroupCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *commands;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)a0;
- (id)initWithDrawingUUID:(id)a0 actionName:(id)a1 commands:(id)a2;
- (id)invertedInDrawing:(id)a0;

@end
