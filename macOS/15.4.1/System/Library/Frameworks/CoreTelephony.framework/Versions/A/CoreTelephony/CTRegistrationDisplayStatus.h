@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *registrationDisplayStatus;
@property (nonatomic) BOOL isInHomeCountry;
@property (nonatomic) BOOL changedDueToSimRemoval;
@property (nonatomic) BOOL isRegistrationForcedHome;
@property (nonatomic) BOOL isSatelliteSystem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
