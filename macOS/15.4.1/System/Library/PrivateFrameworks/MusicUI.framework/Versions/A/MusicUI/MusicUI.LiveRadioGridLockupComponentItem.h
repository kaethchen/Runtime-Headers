@class NSArray;

@interface MusicUI.LiveRadioGridLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ overlayConfiguration;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ dragAndDropPresenter;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ contentDescriptor;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ needsPlaybackSubscriptions;
    void /* unknown type, empty encoding */ playbackStateChangePublisher;
    void /* unknown type, empty encoding */ liveRadioGridLockup;
}

@property (nonatomic, readonly) NSArray *draggingImageComponents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityRole;
- (void)loadView;
- (void)viewWillLayout;
- (void)nowPlayingItemDidChange:(id)a0;
- (void)playbackStateDidChange:(id)a0;
- (void)showSchedule;

@end
