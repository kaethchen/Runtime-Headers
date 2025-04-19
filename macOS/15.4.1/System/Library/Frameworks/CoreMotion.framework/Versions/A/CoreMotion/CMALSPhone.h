@class NSNumber;

@interface CMALSPhone : NSObject <NSSecureCoding, NSCopying> {
    NSNumber *fTimestamp;
    NSNumber *fIllumination;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) NSNumber *illumination;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 illumination:(float)a1;

@end
