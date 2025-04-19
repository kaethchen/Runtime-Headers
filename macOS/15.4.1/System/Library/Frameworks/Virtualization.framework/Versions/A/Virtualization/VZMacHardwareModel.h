@class NSString, NSData;

@interface VZMacHardwareModel : NSObject <NSCopying> {
    long long _isa;
    struct { long long majorVersion; long long minorVersion; long long patchVersion; } _minimumSupportedHostOSVersion;
    unsigned int _boardID;
    unsigned int _variantID;
    NSString *_variantName;
    const struct PlatformConfiguration { unsigned int x0; unsigned int x1; struct { long long x0; long long x1; long long x2; } x2; int x3; BOOL x4; } *_defaultPlatformConfiguration;
    unsigned int _platformVersion;
    unsigned long long _dataRepresentationVersion;
}

@property (readonly) long long _isa;
@property (readonly) unsigned int _boardID;
@property (readonly) unsigned int _variantID;
@property (readonly) struct { long long x0; long long x1; long long x2; } _minimumSupportedHostOSVersion;
@property (readonly) NSString *_variantName;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, getter=isSupported) BOOL supported;

+ (unsigned int)_defaultBoardIDForPlatformVersion:(unsigned int)a0;
+ (id)_defaultHardwareModel;
+ (id)_hardwareModelWithDescriptor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0;

@end
