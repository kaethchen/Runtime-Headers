@interface DNDDevice : NSObject <NSCopying>

@property (readonly) unsigned long long deviceClass;
@property (readonly) unsigned long long deviceCapabilities;
@property (readonly) struct { long long majorVersion; long long minorVersion; long long patchVersion; } frameworkVersion;

+ (id)currentDevice;
+ (id)deviceWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1 frameworkVersion:(struct { long long x0; long long x1; long long x2; })a2;

@end
