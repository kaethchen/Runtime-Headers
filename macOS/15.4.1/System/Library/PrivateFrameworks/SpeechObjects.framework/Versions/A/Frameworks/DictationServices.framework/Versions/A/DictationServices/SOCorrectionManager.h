@class NSPopover, NSString, SOCorrectionViewController, NSWindow;

@interface SOCorrectionManager : NSObject <NSPopoverDelegate>

@property NSWindow *textSelectionWindow;
@property NSPopover *correctionsPopover;
@property SOCorrectionViewController *correctionsViewController;
@property NSString *selectedString;
@property (copy) id /* block */ didShowBlock;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)popoverDidShow:(id)a0;
- (BOOL)isVisible;
- (void)popoverDidClose:(id)a0;
- (BOOL)isMouseInWindow;
- (void)hideCorrectionOverlay;
- (void)showCorrectionsForSelectedString:(id)a0 alternativeStrings:(id)a1 emojiStrings:(id)a2 selectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completionBlock:(id /* block */)a4 didShowBlock:(id /* block */)a5;

@end
