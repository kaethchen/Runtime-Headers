@class NSArray, NSPrintInfo, NSWindowController, NSMutableArray;

@interface NSPageLayout : NSObject {
    NSMutableArray *_accessoryControllers;
    NSPrintInfo *_originalPrintInfo;
    NSPrintInfo *_presentedPrintInfo;
    NSWindowController *_windowController;
}

@property (readonly, copy) NSArray *accessoryControllers;
@property (readonly) NSPrintInfo *printInfo;

+ (id)pageLayout;

- (void)dealloc;
- (long long)runModal;
- (void)setAccessoryView:(id)a0;
- (void)_clearPerPanelIvars;
- (void)_deprecatedReadPrintInfo;
- (void)_deprecatedWritePrintInfo;
- (void)_setOriginalPrintInfo:(id)a0;
- (id)accessoryView;
- (void)addAccessoryController:(id)a0;
- (void)beginSheetUsingPrintInfo:(id)a0 on:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginSheetUsingPrintInfo:(id)a0 onWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginSheetWithPrintInfo:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didEndSelector:(SEL)a3 contextInfo:(void *)a4;
- (void)convertOldFactor:(float *)a0 newFactor:(float *)a1;
- (void)pickedButton:(id)a0;
- (void)pickedOrientation:(id)a0;
- (void)pickedPaperSize:(id)a0;
- (void)pickedUnits:(id)a0;
- (void)readPrintInfo;
- (void)removeAccessoryController:(id)a0;
- (long long)runModalUsingPrintInfo:(id)a0;
- (long long)runModalWithPrintInfo:(id)a0;
- (void)writePrintInfo;

@end
