@class NSString, NSError;

@interface LUI2WallpaperController : NSObject {
    void /* unknown type, empty encoding */ _displayUUID;
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ continuations;
}

@property (nonatomic, readonly) unsigned int displayID;
@property (nonatomic, readonly) NSString *displayUUID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ layer;
@property (nonatomic, readonly) NSString *description;

+ (void)copyImageForDisplayID:(unsigned int)a0 completion:(void (^)(struct CGImage { } *, NSError *))a1;
+ (struct CGImage { } *)publicWallpaperImageForUserID:(unsigned int)a0;
+ (struct CGImage { } *)publicWallpaperImageForUserWithGeneratedUID:(id)a0;
+ (void)takeIdleAssertionWithCompletion:(void (^)(id))a0;
+ (void)takeLockedAssertionWithCompletion:(void (^)(id))a0;
+ (void)updateHibernationPreviewWithCompletion:(void (^)(BOOL, NSError *))a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayID:(unsigned int)a0;
- (void)fenceWithCompletion:(void (^)(void))a0;
- (id)initWithDisplayID:(unsigned int)a0 style:(long long)a1;
- (id)initWithDisplayUUID:(id)a0 style:(long long)a1;

@end
