@class NSMutableDictionary;

@interface FCApp : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)appWithDictionary:(id)a0;
+ (id)appWithPath:(id)a0;
+ (id)appWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
+ (void)setKeychainForCodesigning:(struct __SecKeychain { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)path;
- (void)setPath:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)bundleID;
- (id)displayName;
- (id)plistRepresentation;
- (void)setBundleID:(id)a0;
- (id)appID;
- (void)setAppID:(id)a0;
- (id)_dictionary;
- (id)_stringWithOSType:(unsigned int)a0;
- (id)subApps;
- (id)appStoreRating;
- (id)detachedSignature;
- (id)initWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
- (void)readBundleInfo;
- (void)setDetachedSignature:(id)a0;
- (void)setSubApps:(id)a0;

@end
