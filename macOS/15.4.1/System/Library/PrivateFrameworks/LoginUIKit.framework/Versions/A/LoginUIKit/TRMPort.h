@class NSString, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue, TRMPortDelegate;

@interface TRMPort : NSObject

@property (nonatomic) unsigned long long registryEntryID;
@property (nonatomic) BOOL isInactive;
@property (retain, nonatomic) NSString *portDescription;
@property (nonatomic) int portType;
@property (retain, nonatomic) NSString *portTypeDescription;
@property (nonatomic) int portNumber;
@property (nonatomic) BOOL builtIn;
@property (nonatomic) BOOL connectionActive;
@property (retain, nonatomic) NSString *connectionUUID;
@property (nonatomic) BOOL authorizationRequired;
@property (nonatomic) BOOL authorizationPending;
@property (nonatomic) BOOL userAuthorizationPending;
@property (retain, nonatomic) NSArray *transportsUnauthorized;
@property (nonatomic) int userAuthorizationStatus;
@property (retain, nonatomic) NSString *userAuthorizationStatusDescription;
@property (nonatomic) unsigned int service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct IONotificationPort { } *ioNotificationPort;
@property (nonatomic) unsigned int ioNotification;
@property (nonatomic) BOOL interestNotificationsStarted;
@property (retain, nonatomic) NSDictionary *servicePropertiesFiltered;
@property (readonly, weak, nonatomic) id<TRMPortDelegate> delegate;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)_handleNotificationForService:(unsigned int)a0 messageType:(unsigned int)a1 messageArgument:(void *)a2;
- (BOOL)_startInterestNotifications;
- (void)_stopInterestNotifications;
- (BOOL)_updatePropertiesFromService;
- (id)initWithService:(unsigned int)a0 andDelegate:(id)a1;
- (void)setUserAuthorizationStatus:(int)a0 completionHandler:(id /* block */)a1;

@end
