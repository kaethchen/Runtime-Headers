@class NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface VUINetworkUtilities : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver> {
    RadiosPreferences *_radioPrefs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkUtilityQueue;
@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)airplaneModeChanged;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;

@end
