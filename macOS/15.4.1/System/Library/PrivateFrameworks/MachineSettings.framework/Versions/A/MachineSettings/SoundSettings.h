@interface SoundSettings : NSObject

+ (id)sharedSoundSettings;

- (void)load;
- (void)save;
- (double)mainVolume;
- (void)setMainVolume:(float)a0;

@end
