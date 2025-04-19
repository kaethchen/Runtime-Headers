@class BSColor, CHSBezierPath, NSString;

@interface CHSWatchComplicationsCurvedLabelMetrics : NSObject <BSXPCSecureCoding, NSSecureCoding, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGPoint { double x; double y; } circleCenter;
@property (readonly, nonatomic) double circleRadius;
@property (readonly, nonatomic) double maximumAngularWidth;
@property (readonly, nonatomic) double centerAngle;
@property (readonly, nonatomic) CHSBezierPath *bezierPath;
@property (readonly, nonatomic) BOOL interior;
@property (readonly, nonatomic) double tracking;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) BSColor *textColor;
@property (readonly, nonatomic) unsigned long long accessoryPlacement;
@property (readonly, nonatomic) double accessoryPadding;
@property (readonly, nonatomic) struct CGSize { double width; double height; } accessoryMaxSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)_filenameSafeStableHash;
- (id)_filenameSafeStableHashFromData:(id)a0;
- (id)_initWithInstance:(id)a0;

@end
