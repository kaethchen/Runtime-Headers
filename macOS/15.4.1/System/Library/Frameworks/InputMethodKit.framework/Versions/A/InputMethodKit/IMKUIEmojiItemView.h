@class NSImageView, IMKUIEmojiLightweightCandidateWindowController;

@interface IMKUIEmojiItemView : NSVisualEffectView

@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSImageView *emojiImageView;
@property (weak, nonatomic) IMKUIEmojiLightweightCandidateWindowController *windowController;

- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 alignment:(long long)a1;

@end
