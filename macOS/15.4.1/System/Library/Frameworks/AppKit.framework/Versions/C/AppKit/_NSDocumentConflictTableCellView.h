@class NSDocumentConflictPanelController, NSTextField;

@interface _NSDocumentConflictTableCellView : NSTableCellView {
    NSTextField *firstLine;
    NSTextField *secondLine;
}

@property (weak) NSDocumentConflictPanelController *controller;

- (void).cxx_destruct;
- (double)additionalWidthRequired;
- (void)showPreview:(id)a0;

@end
