@interface SBAppLocator : NSObject <NSCoding> {
    struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } _address;
    char _isCurrentProcess;
    unsigned int _launchFlags;
}

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)bundleIdentifier;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)address;
- (BOOL)isRunning;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)addressWithoutLaunching;
- (BOOL)isCurrentProcess;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)launchWithFlags:(unsigned int)a0;
- (id)processInformation;
- (void)resetAddress;
- (id)sdef;

@end
