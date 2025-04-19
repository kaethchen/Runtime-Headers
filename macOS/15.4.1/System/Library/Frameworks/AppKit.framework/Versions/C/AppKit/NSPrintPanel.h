@class NSView, NSString, NSArray, NSPrintOperation, NSPrintPreviewUpdater, NSWindowController, NSPrintInfo, NSMutableArray;

@interface NSPrintPanel : NSObject {
    NSMutableArray *_accessoryControllers;
    NSPrintOperation *_printOperation;
    NSPrintPreviewUpdater *_previewUpdater;
    NSView *_thumbnailView;
    long long _options;
    NSString *_defaultButtonTitle;
    NSString *_helpAnchor;
    NSString *_jobStyleHint;
    NSPrintInfo *_originalPrintInfo;
    NSPrintInfo *_presentedPrintInfo;
    NSWindowController *_windowController;
}

@property (readonly, copy) NSArray *accessoryControllers;
@property unsigned long long options;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *jobStyleHint;
@property (readonly) NSPrintInfo *printInfo;

+ (id)printPanel;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)runModal;
- (void)setAccessoryView:(id)a0;
- (void)pickedAllPages:(id)a0;
- (void)_clearPerPanelIvars;
- (id)_deprecatedAccessoryView;
- (void)_deprecatedFinalWritePrintInfo;
- (void)_deprecatedSetAccessoryView:(id)a0;
- (void)_deprecatedUpdateFromPrintInfo;
- (id)_makePrintWindowControllerWithPrintOperation:(id)a0 sheet:(BOOL)a1;
- (unsigned int)_optionsForShowingAsSheet:(BOOL)a0;
- (long long)_runModalWithPrintInfo:(id)a0;
- (void)_setOriginalPrintInfo:(id)a0;
- (void)_setPrintOperation:(id)a0;
- (void)_setThumbnailView:(id)a0;
- (id)_thumbnailView;
- (id)accessoryView;
- (void)addAccessoryController:(id)a0;
- (void)beginSheetUsingPrintInfo:(id)a0 onWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginSheetWithPrintInfo:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didEndSelector:(SEL)a3 contextInfo:(void *)a4;
- (id)defaultButtonTitle;
- (void)finalWritePrintInfo;
- (void)pickedButton:(id)a0;
- (void)pickedLayoutList:(id)a0;
- (void)removeAccessoryController:(id)a0;
- (long long)runModalUsingPrintInfo:(id)a0;
- (long long)runModalWithPrintInfo:(id)a0;
- (void)setDefaultButtonTitle:(id)a0;
- (void)updateFromPrintInfo;

@end
