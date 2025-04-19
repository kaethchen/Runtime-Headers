@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isUserRequested) BOOL userRequested;
@property (readonly, copy) NSDate *userVisibleEndDate;
@property (readonly, copy) NSDate *modeConfigurationModifiedDate;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *modeIdentifier;
@property (readonly, copy) DNDModeAssertionLifetime *lifetime;
@property (readonly) unsigned long long reason;

+ (id)detailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2;
+ (id)detailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2 reason:(unsigned long long)a3;
+ (id)userRequestedAssertionDetailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithDetails:(id)a0;
- (id)_initWithIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationModifiedDate:(id)a2 lifetime:(id)a3 reason:(unsigned long long)a4 userVisibleEndDate:(id)a5;

@end
