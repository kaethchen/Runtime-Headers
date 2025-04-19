@class NSString;
@protocol HKSPXPCHeartbeatListenerDelegate;

@interface _HKSPDarwinNotificationHeartbeatListener : NSObject <HKSPXPCHeartbeatListener>

@property (readonly, nonatomic) NSString *lifecycleNotification;
@property (readonly, weak, nonatomic) id<HKSPXPCHeartbeatListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
