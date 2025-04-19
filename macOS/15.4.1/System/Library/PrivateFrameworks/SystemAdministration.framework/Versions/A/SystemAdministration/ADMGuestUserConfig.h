@class NSImage;

@interface ADMGuestUserConfig : NSObject {
    NSImage *mDefaultGuestPicture;
}

+ (long long)guestMode;
+ (BOOL)_isFDEEnabled;
+ (BOOL)isGuestEnabled;
+ (void)setGuestEnabled:(BOOL)a0;
+ (id)sharedConfig;
+ (void)syncGuestState;

- (void)dealloc;
- (id)init;
- (id)_generateGuestPassword;
- (id)_imageFromCGImage1x:(struct CGImage { } *)a0 andCGImage2x:(struct CGImage { } *)a1;
- (id)createGuestAccount;
- (id)findGuestAccount;
- (id)guestUserPicture;
- (BOOL)isGuestAccountEnabled;
- (void)setGuestAccountEnabled:(BOOL)a0;

@end
