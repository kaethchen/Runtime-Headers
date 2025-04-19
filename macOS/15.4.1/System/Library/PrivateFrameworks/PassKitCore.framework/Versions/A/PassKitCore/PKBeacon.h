@class NSUUID, NSNumber, NSString;

@interface PKBeacon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *proximityUUID;
@property (retain, nonatomic) NSNumber *major;
@property (retain, nonatomic) NSNumber *minor;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *relevantText;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proximityUUIDAsString;
- (void)setProximityUUIDWithString:(id)a0;

@end
