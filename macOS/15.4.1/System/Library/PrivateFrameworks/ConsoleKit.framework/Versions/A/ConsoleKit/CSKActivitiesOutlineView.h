@interface CSKActivitiesOutlineView : NSOutlineView

- (void)collapseItem:(id)a0 collapseChildren:(BOOL)a1;
- (void)expandItem:(id)a0 expandChildren:(BOOL)a1;
- (void)mouseDown:(id)a0;
- (void)_reloadRelationCellViewForItem:(id)a0;

@end
