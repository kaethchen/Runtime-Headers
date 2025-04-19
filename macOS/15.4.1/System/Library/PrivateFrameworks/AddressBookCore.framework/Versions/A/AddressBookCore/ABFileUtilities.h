@class onceToken;
@protocol ABFileServices;

@interface ABFileUtilities : NSObject {
    id<ABFileServices> _services;
    struct { onceToken *object; long long x0; } _sharedLockDirectoryUrlOnce;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)a0;
- (id)initWithFileServices:(id)a0;
- (id)proxyLockUrlForFileAtUrl:(id)a0;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:(id)a0;

@end
