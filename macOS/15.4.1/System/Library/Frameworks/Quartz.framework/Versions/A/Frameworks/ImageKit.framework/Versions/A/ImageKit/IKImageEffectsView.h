@class IKSingleImageEffect;

@interface IKImageEffectsView : IKImageEditView {
    IKSingleImageEffect *_effect1;
    IKSingleImageEffect *_effect2;
    IKSingleImageEffect *_effect3;
    IKSingleImageEffect *_effect4;
    IKSingleImageEffect *_effect5;
    IKSingleImageEffect *_effect6;
    IKSingleImageEffect *_effect7;
    IKSingleImageEffect *_effect8;
    IKSingleImageEffect *_effect9;
    IKSingleImageEffect *_effect[9];
    struct CGImage { } *_image;
}

+ (id)sharedImageEditView;

- (struct CGImage { } *)image;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDataSource:(id)a0;
- (struct CGImage { } *)createQuestionMarkImage;
- (void)viewWillBecomeActive;
- (void)viewWillBecomeInActive;

@end
