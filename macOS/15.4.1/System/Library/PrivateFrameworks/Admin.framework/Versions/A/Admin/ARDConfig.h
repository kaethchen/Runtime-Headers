@interface ARDConfig : NSObject

+ (id)sharedARDConfig;

- (BOOL)isARDOn;
- (BOOL)isScreenSharingOn;
- (void)setARDEnabled:(BOOL)a0;
- (void)setScreenSharingEnabled:(BOOL)a0;
- (void)writeVNCPassword:(id)a0;

@end
