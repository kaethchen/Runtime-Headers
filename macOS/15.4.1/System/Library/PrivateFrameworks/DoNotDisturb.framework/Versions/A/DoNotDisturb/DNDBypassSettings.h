@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long immediateBypassEventSourceType;
@property (readonly, copy) NSString *immediateBypassCNGroupIdentifier;
@property (readonly) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)diffDescription;
- (id)_initWithImmediateBypassEventSourceType:(unsigned long long)a0 immediateBypassCNGroupIdentifier:(id)a1 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)a2;
- (id)_initWithSettings:(id)a0;

@end
