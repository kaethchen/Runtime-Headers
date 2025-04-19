@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDHeartRateDataCollectionForwarder : NSObject <HDDataCollectionForwarder> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _heartRateEnabledInPrivacy;
    int _privacyPreferencesNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
