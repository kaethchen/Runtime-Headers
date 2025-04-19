@interface DownloadTableView : NSTableView

- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityTitle;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (id)menuForEvent:(id)a0;
- (id)_controller;

@end
