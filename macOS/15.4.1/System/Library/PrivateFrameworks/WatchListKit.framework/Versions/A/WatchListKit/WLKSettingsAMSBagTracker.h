@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (id)init;
- (void).cxx_destruct;
- (void)_removeInactiveKeys:(id)a0;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)_updateKeys:(id)a0;
- (id)isNowPlayingEnabled;
- (void)updateTrackedBagValues;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;

@end
