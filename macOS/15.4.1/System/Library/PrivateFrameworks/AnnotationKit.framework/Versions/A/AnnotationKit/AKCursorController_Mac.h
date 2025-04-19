@class AKController, NSCursor;

@interface AKCursorController_Mac : NSObject

@property (weak) AKController *controller;
@property (retain, nonatomic) NSCursor *currentCursorOrNil;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)setCurrentCursorOrNil:(id)a0 updateSystemCursor:(BOOL)a1;
- (void)updateCursorForDraggableArea:(unsigned long long)a0 ofAnnotation:(id)a1;

@end
