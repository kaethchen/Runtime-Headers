@interface SOFileTransferRenderer : NSObject

+ (void)drawBalloonGlossForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)drawBalloonImage:(id)a0 withOp:(unsigned long long)a1 forSize:(struct CGSize { double x0; double x1; })a2;
+ (void)drawBalloonMaskForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)drawEtchingForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)getFileTransferImageForIcon:(id)a0 string:(id)a1 textColor:(id)a2 backgroundColor:(id)a3;
+ (int)maxImageHeight;
+ (int)maxImageWidth;
+ (id)wrapImageInStyle:(id)a0 overlayPlayButton:(BOOL)a1;
+ (id)wrapPass:(id)a0 textColor:(id)a1 backgroundColor:(id)a2;

@end
