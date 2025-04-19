@class NSString;

@interface MPSGraphExecutableSerializationDescriptor : MPSGraphObject {
    BOOL _userSetMinimumDeploymentTarget;
    NSString *_minimumDeploymentTarget;
}

@property BOOL append;
@property unsigned long long deploymentPlatform;
@property (copy) NSString *minimumDeploymentTarget;

+ (void)validateMinimumDeploymentTargetVersion:(struct optional<MPSGraphOperatingSystemVersion> { union { char x0; struct MPSGraphOperatingSystemVersion { long long x0; long long x1; long long x2; } x1; } x0; BOOL x1; })a0 forPlatform:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (struct MPSGraphOperatingSystemVersion { long long x0; long long x1; long long x2; })getDeploymentTargetAsOSVersion;
- (id)getPackageVersionString;
- (struct optional<MPSGraphOperatingSystemVersion> { union { char x0; struct MPSGraphOperatingSystemVersion { long long x0; long long x1; long long x2; } x1; } x0; BOOL x1; })getUserSetMinimumDeploymentTarget;

@end
