@interface IKCameraTableView : NSTableView

- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (id)getBagdeBackgroundForObjectCount:(int)a0;
- (id)getCountBadgeForCount:(int)a0;
- (void)iconSizeChanged:(double)a0;

@end
