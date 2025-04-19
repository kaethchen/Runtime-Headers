@class SFPlayAudioButtonItem;

@interface SearchUIPlayAudioButtonItem : SearchUIToggleButtonItem

@property (retain) SFPlayAudioButtonItem *sfButtonItem;
@property BOOL gotNowPlayingChangedNotificationAfterPlaying;
@property BOOL needsUpdate;

+ (BOOL)isSingleItemMedia:(id)a0;

- (unsigned long long)status;
- (BOOL)hasState;
- (void)playbackStateDidChange;
- (void)buttonPressed;
- (id)toggledTitle;
- (id)untoggledTitle;
- (void)updatePlayState;
- (BOOL)allowsContextMenu;
- (id)commandForStatus:(unsigned long long)a0;
- (id)initWithSFButtonItem:(id)a0;
- (void)newPlayButtonPressedWithNotification:(id)a0;
- (void)nowPlayingItemDidChange;
- (id)offStateSymbolName;
- (id)onStateSymbolName;
- (void)playbackDidFinish;
- (BOOL)shouldSkipUpdate;
- (void)toggleOff;

@end
