@class NSString, NSArray, NSDictionary, MRImageProvider;

@interface MRCAMLLayer : NSObject {
    double x;
    double y;
    double width;
    double height;
    double duration;
    float color[4];
    BOOL hasColor;
    BOOL hasSublayerTransform;
    BOOL hasTransform;
    struct CGPoint { double x; double y; } anchorPoint;
    double subScaleX;
    double subScaleY;
    double subScaleZ;
    double subRX;
    double subRY;
    double subRZ;
    double subTX;
    double subTY;
    double subTZ;
    double scaleX;
    double scaleY;
    double scaleZ;
    double rX;
    double rY;
    double rZ;
    double tX;
    double tY;
    double tZ;
    double opacity;
    BOOL hasOpacity;
    BOOL masksToBounds;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) NSArray *sublayers;
@property (retain, nonatomic) NSDictionary *states;
@property (retain, nonatomic) NSArray *masks;
@property (retain, nonatomic) MRImageProvider *contents;

- (void)dealloc;
- (id)init;

@end
