@class NSImage, NSAttributedString, PKPass;

@interface SOFileTransferAttachmentCell : NSTextAttachmentCell

@property (getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL isMovie;
@property (nonatomic) BOOL isAudioMessage;
@property (retain, nonatomic) NSAttributedString *baseString;
@property (retain, nonatomic) NSImage *baseImage;
@property (nonatomic) PKPass *pass;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setInlineImage:(id)a0;
- (void)setAudioMessageImage:(id)a0;
- (void)setFileTransferName:(id)a0 withImage:(id)a1;
- (void)setImageGivenTextColor:(id)a0 backgroundColor:(id)a1;
- (void)setMovieImage:(id)a0;

@end
