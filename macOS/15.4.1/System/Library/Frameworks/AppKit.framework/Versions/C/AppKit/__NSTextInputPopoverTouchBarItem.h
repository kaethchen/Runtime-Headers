@class NSTextInputContext;

@interface __NSTextInputPopoverTouchBarItem : NSPopoverTouchBarItem {
    BOOL _postsESCOnClose;
}

@property NSTextInputContext *inputContext;
@property BOOL postsESCOnClose;
@property BOOL postESCOnNextClose;

- (void)dismissPopover:(id)a0 postESCKeyEvent:(BOOL)a1;
- (BOOL)postsESCOnClose;
- (BOOL)_allowsInvisiblePopover;
- (void)setPostsESCOnClose:(BOOL)a0;
- (void)showPopover:(id)a0;

@end
