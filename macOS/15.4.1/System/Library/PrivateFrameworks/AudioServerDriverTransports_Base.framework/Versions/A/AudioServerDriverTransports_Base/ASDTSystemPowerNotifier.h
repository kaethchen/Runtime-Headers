@class NSString, NSObject;
@protocol OS_dispatch_queue, ASDTSystemPowerNotifierDelegate;

@interface ASDTSystemPowerNotifier : NSObject <ASDTSystemPowerStatus> {
    struct __IOPMConnection { } *_ioPMConnection;
}

@property (retain, nonatomic) NSString *bundleName;
@property (weak, nonatomic) id<ASDTSystemPowerNotifierDelegate> delegate;
@property (nonatomic) BOOL wakeForEarlyWake;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *powerNotificationQueue;
@property BOOL systemIsSleeping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notifierForBundleName:(id)a0 delegate:(id)a1 earlyWake:(BOOL)a2;
+ (id)notifierForBundleName:(id)a0 delegate:(id)a1 queue:(id)a2 earlyWake:(BOOL)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)allowSleepStateNotification:(int)a0;
- (void)deregisterForSystemSleepNotificationsIOPMConnection;
- (void)handlePowerNotificationWithConnection:(struct __IOPMConnection { } *)a0 messageToken:(unsigned int)a1 eventDescriptor:(unsigned int)a2;
- (id)initForBundleName:(id)a0 delegate:(id)a1 queue:(id)a2 earlyWake:(BOOL)a3;
- (BOOL)registerForSystemSleepNotificationsIOPMConnection;

@end
