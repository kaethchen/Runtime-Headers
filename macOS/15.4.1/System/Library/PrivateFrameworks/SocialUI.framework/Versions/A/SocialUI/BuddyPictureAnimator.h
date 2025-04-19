@class SOTimer, NSMutableSet, SOSystemIdleMonitor, SOTimerCenter;

@interface BuddyPictureAnimator : NSObject

@property (readonly, retain, nonatomic) NSMutableSet *buddyPicturesToPost;
@property (readonly, retain, nonatomic) SOTimerCenter *timerCenter;
@property (readonly, retain, nonatomic) SOTimer *mainAnimationTimer;
@property (readonly, nonatomic) BOOL shouldNotAnimate;
@property (readonly, nonatomic) SOSystemIdleMonitor *systemIdleMonitor;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)appDidBecomeActive:(id)a0;
- (void)setupFramePulse;
- (void)accountLoggedIn:(id)a0;
- (void)addAnimatingBuddyPicture:(id)a0;
- (void)appDidBecomeResignActive:(id)a0;
- (void)buddyPictureTimerFired:(id)a0;
- (void)cleanupFrameTimer;
- (void)removeAnimatingBuddyPicture:(id)a0;
- (void)startAnimationIfDesired;
- (void)systemBecameActive:(id)a0;

@end
