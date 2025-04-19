@class NSButton, NSView;

@interface CPKSkintoneHelpViewController : NSViewController {
    NSView *_imageEnclosingView;
    NSView *_imageForEmojiSkinTones;
    NSView *_imageForCouplesSkinTones;
    id /* block */ _completionBlock;
    BOOL _hasCompletionBlockCalled;
}

@property NSButton *confirmButton;

- (void)dealloc;
- (void)viewDidDisappear;
- (void)_doConfirm:(id)a0;
- (id)initForEmoji:(id)a0 usingBlock:(id /* block */)a1;

@end
