@class NSString;

@interface PACropModeDrawingDelegate : NSObject <PAImageDrawingDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previewExtent;
}

@property struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } previewTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)drawImageLayer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 display:(id)a2 transform:(id)a3 context:(id)a4;
- (id)initWithPreviewSize:(struct CGSize { double x0; double x1; })a0;

@end
