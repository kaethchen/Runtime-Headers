@class NSString, BuildVersion, NSArray;

@interface Firmware : NSObject {
    NSString *_path;
    NSString *_bootloaderPath;
    NSString *_sysConfigPath;
    BuildVersion *_buildVersion;
    NSArray *_firmwareComponents;
    NSString *_firmwareComponentsRootPath;
    NSString *_firmwareType;
    int _fdFirmware;
    int _fdBootloader;
    int _fdSysCfg;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _diskReadLock;
}

+ (id)stringForFirmwareType:(int)a0;

- (void)dealloc;
- (id)path;
- (id)buildVersion;
- (id)firmwareComponents;
- (void)ensureFileOpen:(int)a0;
- (id)bootloaderPath;
- (int)fileDescriptorForType:(int)a0;
- (id)firmwareComponentsPath;
- (unsigned long long)firmwareSize:(int)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 type:(int)a2;
- (BOOL)hasBootloader;
- (BOOL)hasFirmware;
- (BOOL)hasFirmwareComponents;
- (BOOL)hasFirmwareType:(int)a0;
- (BOOL)hasSysCfg;
- (id)initWithManifestAtPath:(id)a0;
- (id)initWithPath:(id)a0 buildVersion:(id)a1;
- (BOOL)isSigmatelShuffle:(id)a0;
- (id)pathForType:(int)a0;
- (id)sysConfigPath;

@end
