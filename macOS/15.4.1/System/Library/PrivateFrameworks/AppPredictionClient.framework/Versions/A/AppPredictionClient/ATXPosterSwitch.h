@class NSString;

@interface ATXPosterSwitch : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *lockscreenId;
@property (readonly, copy, nonatomic) NSString *switchMechanism;
@property (readonly, copy, nonatomic) NSString *outcome;
@property (readonly, nonatomic) long long duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLockscreenId:(id)a0 switchMechanism:(id)a1;
- (id)initWithLockscreenId:(id)a0 switchMechanism:(id)a1 outcome:(id)a2 duration:(unsigned long long)a3;
- (BOOL)isEqualToATXPosterSwitch:(id)a0;

@end
