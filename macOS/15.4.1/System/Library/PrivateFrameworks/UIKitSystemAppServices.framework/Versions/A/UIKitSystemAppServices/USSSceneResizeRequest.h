@class NSString, BKSAnimationFenceHandle;

@interface USSSceneResizeRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) long long gamut;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) BKSAnimationFenceHandle *fence;

+ (id)sceneResizeRequestForScene:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 gamut:(long long)a3 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a4 fence:(id)a5;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initCommon;

@end
