@class NSDictionary;

@interface IMChorosMonitor : NSObject

@property (retain, nonatomic) NSDictionary *emergencyHandles;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitor;
- (BOOL)isStewieActive;
- (id)getState;
- (id)telephonyClient;
- (void)stateChanged:(id)a0;
- (BOOL)_activeServicesHasEmergency:(id)a0;
- (BOOL)isMessagingActiveOverSatellite;
- (BOOL)isSatelliteConnectionActive;
- (BOOL)isStewieEmergencyActive;
- (long long)mostRecentlyUsedConversationForEmergency;
- (void)openStewieAppForChatIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)placeEmergencyCallToHandle:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowTextEmergencyServicesButton;

@end
