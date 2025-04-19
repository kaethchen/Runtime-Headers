@class NSString, NSObject;
@protocol MPCSleepTimerEngineObserverDelegate;

@interface MPCSleepTimerEngineObserver : NSObject <_MPCPlaybackEngineEventObserving, MPCPlaybackEngineEventObserving>

@property (weak, nonatomic) NSObject<MPCSleepTimerEngineObserverDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
