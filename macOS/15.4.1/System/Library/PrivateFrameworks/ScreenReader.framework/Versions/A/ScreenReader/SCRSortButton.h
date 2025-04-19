@interface SCRSortButton : SCRButton

- (BOOL)isSelected;
- (BOOL)alwaysAllowDrag;
- (void)appendSortOrderStatusDescription:(id)a0;
- (BOOL)handleDragToElement:(id)a0 hint:(long long)a1;
- (BOOL)ignoreDragNotifications;
- (id)itemDescriptionForEcho;
- (id)tableColumnUIElement;

@end
