@class NSString, CMDrawableStyle, NSData, OADOrientedBounds, OADDrawable;

@interface CMDrawableMapper : CMMapper {
    OADDrawable *mDrawable;
    CMDrawableStyle *mStyle;
    NSData *mImageBinaryData;
    NSString *mName;
    NSString *mExtension;
    int mResourceType;
    NSString *mSourcePath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBox;
    float mRotation;
    BOOL mIsSupported;
    BOOL mIsCropped;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mUncroppedBox;
    OADOrientedBounds *mOrientedBounds;
}

- (void).cxx_destruct;
- (float)rotation;
- (id)initWithParent:(id)a0;
- (void)setRotation:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })box;
- (id)blipAtIndex:(unsigned int)a0;
- (void)calculateUncroppedBox:(id)a0;
- (id)convertMetafileToPdf;
- (id)initWithOadDrawable:(id)a0 parent:(id)a1;
- (BOOL)isCropped;
- (void)mapBounds;
- (void)mapDrawingContext:(id)a0 at:(id)a1 relative:(BOOL)a2 withState:(id)a3;
- (void)mapImageBinaryData;
- (void)mapShapeGraphicsAt:(id)a0 withState:(id)a1;
- (void)mapTextBoxAt:(id)a0 withState:(id)a1;
- (id)saveResourceAndReturnPath:(id)a0 withType:(int)a1;
- (void)setBoundingBox;
- (void)setWithOadImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeTextBoxRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })uncroppedBox;

@end
