@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSSet *profileIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;

- (id)init;
- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_fetchInstalledProfilesAndListen;
- (BOOL)_hasRelevantProfileChanged:(id)a0;
- (void)_profilesChanged:(id)a0;
- (id)fetchInstalledProfileIdentifiers;

@end
