@class NSString, CPKPopover, CPKEmojiDataSource, NSWindow;
@protocol CNMHEmojiPickerHelperDelegate;

@interface CNMHEmojiPickerHelper : NSObject <CPKPopoverDelegate, NSPopoverDelegate>

@property BOOL unscaledMode;
@property (weak) NSWindow *presentingWindow;
@property (retain) CPKPopover *popover;
@property (retain) CPKEmojiDataSource *emojiDataSource;
@property (weak, nonatomic) id<CNMHEmojiPickerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (BOOL)popoverShouldDetach:(id)a0;
- (void)popoverWillClose:(id)a0;
- (BOOL)characterPickerPopover:(id)a0 didSelectCharacter:(id)a1;
- (id)currentNSWindowForWindow:(id)a0 needsYInvert:(BOOL *)a1;
- (id)initForUnscaledMode:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledRectFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showEmojiPickerInWindow:(id)a0 atWindowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 preferredEdge:(unsigned long long)a2;

@end
