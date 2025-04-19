@class NSString, CPKEmojiPreviewView;

@interface CPKEmojiIMPreviewWindow : NSPanel

@property CPKEmojiPreviewView *previewView;
@property (copy) NSString *emojiString;

- (void)dealloc;
- (id)init;
- (id)_cornerMask;
- (void)showAtInsertionPoint;
- (void)showAtScreenLocation:(struct CGPoint { double x0; double x1; })a0;

@end
