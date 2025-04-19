@interface PHXTableView : NSTableView

- (void)awakeFromNib;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)keyDown:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)printDescription:(id)a0;

@end
