@class CNUIUndoableCommand;

@interface CNUISetMultipleImagesCommand : CNUIUndoableCommand

@property (nonatomic) BOOL shouldSave;
@property (retain, nonatomic) CNUIUndoableCommand *aggregateCommand;
@property (copy, nonatomic) id /* block */ didExecuteBlock;

+ (id)makeAggregateCommandWithContactStore:(id)a0 contacts:(id)a1 imageData:(id)a2 largeImageData:(id)a3 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 imageType:(id)a5 memojiMetadata:(id)a6 ignoresGuardianRestrictions:(BOOL)a7 shouldSave:(BOOL)a8;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)didExecute;
- (void)executeRedo;
- (void)executeUndo;
- (id)initWithContactStore:(id)a0 contacts:(id)a1 imageData:(id)a2 largeImageData:(id)a3 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 imageType:(id)a5 memojiMetadata:(id)a6 ignoresGuardianRestrictions:(BOOL)a7 shouldSave:(BOOL)a8;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
