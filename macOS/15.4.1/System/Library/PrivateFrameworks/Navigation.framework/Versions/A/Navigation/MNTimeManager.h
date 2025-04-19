@class MNObserverHashTable, NSDate;
@protocol MNTimeProvider;

@interface MNTimeManager : NSObject {
    MNObserverHashTable *_timeManagerObservers;
}

@property (class, readonly, nonatomic) double currentTime;
@property (class, readonly, nonatomic) NSDate *currentDate;

@property (retain, nonatomic) id<MNTimeProvider> provider;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_resetToDefaultProvider;

@end
