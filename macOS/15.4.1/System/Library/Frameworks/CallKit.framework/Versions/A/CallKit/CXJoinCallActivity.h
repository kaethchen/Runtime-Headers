@class NSString, NSUUID, NSData, NSDate;

@interface CXJoinCallActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *applicationContext;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) BOOL startWhenStaged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 metadata:(id)a1 applicationContext:(id)a2 activityIdentifier:(id)a3;
- (BOOL)isEqualToJoinCallActivity:(id)a0;

@end
