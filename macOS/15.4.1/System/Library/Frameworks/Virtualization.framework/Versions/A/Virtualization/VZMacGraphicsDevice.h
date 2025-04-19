@interface VZMacGraphicsDevice : VZGraphicsDevice {
    long long _deviceFeatureLevel;
    BOOL _prefersLowPower;
}

- (long long)_deviceFeatureLevel;
- (BOOL)_prefersLowPower;

@end
