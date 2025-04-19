@class NSTextField, NSTimer, NSPopUpButton, IKTexturePacker;

@interface IKTexturePackerView : NSOpenGLView {
    NSPopUpButton *_packerIndex;
    NSTextField *_koUsed;
    NSTextField *_koFree;
    IKTexturePacker *_packer;
    NSTimer *_autoupdate;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)autoUpdate;
- (void)beginOrtho;
- (id)packer;
- (void)setPacker:(id)a0;

@end
