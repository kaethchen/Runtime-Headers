@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {
    BOOL _isWildcard;
}

@property (readonly, nonatomic) unsigned int biometricEventType;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithBiometricEventType:(unsigned int)a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;
- (BOOL)describes:(id)a0;
- (id)initWithBiometricEventType:(unsigned int)a0;
- (BOOL)requiresFuzzyMatching;

@end
