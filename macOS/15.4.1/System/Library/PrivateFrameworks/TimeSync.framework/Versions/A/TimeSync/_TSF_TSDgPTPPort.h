@class IOKNotificationPort, IOKInterestNotification, _TSF_IODConnection, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface _TSF_TSDgPTPPort : NSObject {
    IOKService *_service;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_generalInterestNotification;
    BOOL _updatePropertiesOnPropertyChange;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic) unsigned long long clockIdentifier;
@property (readonly, nonatomic) IOKService *service;
@property (readonly, nonatomic) _TSF_IODConnection *connection;
@property (readonly, nonatomic) int portType;
@property (readonly, nonatomic) BOOL logNotifyTest;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1;
+ (id)gPTPPortWithService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)iokitMatchingDictionaryForPortClass:(id)a0 clockIdentifier:(unsigned long long)a1 andPortNumber:(unsigned short)a2;

- (id)init;
- (void).cxx_destruct;
- (int)portType;
- (id)initWithService:(id)a0;
- (unsigned long long)_clockIdentifier;
- (unsigned short)_portNumber;
- (int)_portRole;
- (void)finalizeNotifications;
- (id)getMetrics;
- (id)getMetricsWithDelta:(id)a0;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;
- (void)serviceTerminated;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end
