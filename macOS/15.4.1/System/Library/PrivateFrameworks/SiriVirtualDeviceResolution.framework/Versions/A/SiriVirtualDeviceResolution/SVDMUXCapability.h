@class _TtC27SiriVirtualDeviceResolution13MUXCapability;

@interface SVDMUXCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution13MUXCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (id)_swiftBacking;
- (long long)supportsMUX;

@end
