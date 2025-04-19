@interface MRPictureFrameImage : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inner;
    struct CGSize { double width; double height; } size;
}

@end
