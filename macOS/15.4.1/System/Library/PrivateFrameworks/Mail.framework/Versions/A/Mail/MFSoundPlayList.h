@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MFSoundPlayList : NSObject {
    NSMutableArray *_soundsToPlay;
    BOOL _playingSound;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (id)_playList;
+ (void)addSound:(id)a0 playImmediately:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_addSound:(id)a0 playImmediately:(BOOL)a1;
- (void)_playNextSound;
- (void)_playSound;

@end
