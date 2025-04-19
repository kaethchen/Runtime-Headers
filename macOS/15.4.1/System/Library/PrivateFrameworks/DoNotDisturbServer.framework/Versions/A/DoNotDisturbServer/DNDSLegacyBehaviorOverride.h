@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long overrideType;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) NSArray *effectiveIntervals;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOverrideType:(unsigned long long)a0 mode:(unsigned long long)a1 effectiveIntervals:(id)a2;

@end
