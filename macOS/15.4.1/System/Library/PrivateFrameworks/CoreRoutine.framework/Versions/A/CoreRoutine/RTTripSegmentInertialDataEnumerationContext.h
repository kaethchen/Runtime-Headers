@class RTTripSegmentInertialDataEnumerationOptions;

@interface RTTripSegmentInertialDataEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTTripSegmentInertialDataEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToContext:(id)a0;
- (id)initWithEnumerationOptions:(id)a0;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;

@end
