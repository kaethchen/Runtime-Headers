@class QCImageManager;

@interface QCImageExporter : NSObject <QCImageExporter> {
    QCImageManager *_manager;
    void *_unused[4];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)exporterForImageManager:(id)a0;

- (id)description;
- (id)imageManager;
- (id)bestPixelFormatWithCompatibility:(unsigned long long)a0 forProvider:(id)a1 usingColorSpace:(struct CGColorSpace **)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForProvider:(id)a0 withTransformation:(id)a1;
- (id)createRepresentationOfType:(id)a0 withProvider:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)initWithImageManager:(id)a0;
- (id)supportedRepresentationTypes;

@end
