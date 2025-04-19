@interface _RSOrthographicDetector_DetectBox : NSObject {
    float _area;
    float _confidence;
    int _scale;
    int _label;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _box;
}

- (id)description;

@end
