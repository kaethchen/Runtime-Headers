@class NSNumber, NSUUID, NSValue;

@interface CXScreenShareAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *displayID;
@property (nonatomic, getter=isWindowed) BOOL windowed;
@property (retain, nonatomic) NSUUID *windowUUID;
@property (nonatomic) long long deviceFamily;
@property (nonatomic) long long deviceHomeButtonType;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *displayScale;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (retain, nonatomic) NSNumber *systemRootLayerScale;
@property (retain, nonatomic) NSValue *systemRootLayerTransform;
@property (copy, nonatomic) NSValue *originalResolution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;

@end
