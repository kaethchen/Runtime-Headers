@class CloudSettingsManager;

@interface MTMouseGesturesBackEnd : NSObject {
    id /* block */ _updateBSBlock;
    CloudSettingsManager *_csManager;
}

@property unsigned long long updateBSCounter;
@property long long updateDelay;
@property (readonly) unsigned long long mouseType;
@property long long oneFingerDoubleTap;
@property long long twoFingerSwipe;
@property long long twoFingerDoubleTap;
@property long long buttonMode;
@property long long scrollMode;
@property BOOL momentumScroll;
@property double scrollSpeedRaw;
@property BOOL shouldSyncChangesToCloud;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)buttonMode;
- (void)setButtonMode:(long long)a0;
- (BOOL)hasCapability:(id)a0;
- (BOOL)momentumScroll;
- (void)setMomentumScroll:(BOOL)a0;
- (void)_notifyCloudSettingChanged:(id)a0;
- (void)_setMTMouseIntValue:(long long)a0 forKey:(struct __CFString { } *)a1;
- (void)_setMTMouseStringValue:(struct __CFString { } *)a0 forKey:(struct __CFString { } *)a1;
- (long long)oneFingerDoubleTap;
- (void)setOneFingerDoubleTap:(long long)a0;
- (void)setTwoFingerDoubleTap:(long long)a0;
- (void)setTwoFingerSwipe:(long long)a0;
- (long long)twoFingerDoubleTap;
- (long long)twoFingerSwipe;

@end
