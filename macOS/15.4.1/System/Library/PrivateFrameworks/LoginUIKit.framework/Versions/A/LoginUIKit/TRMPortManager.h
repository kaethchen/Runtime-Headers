@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, TRMPortManagerDelegate;

@interface TRMPortManager : NSObject <TRMPortDelegate>

@property (class, readonly, nonatomic) NSDictionary *trmMatchingDictionary;

@property (retain, nonatomic) NSDictionary *ioMatchingDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct IONotificationPort { } *ioNotificationPort;
@property (nonatomic) unsigned int ioServiceAddedIterator;
@property (nonatomic) BOOL matchingNotificationsStarted;
@property (retain, nonatomic) NSMutableDictionary *portsMutable;
@property (weak, nonatomic) id<TRMPortManagerDelegate> delegate;
@property (readonly, retain, nonatomic) NSArray *ports;
@property (readonly) BOOL hasRestrictedPorts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (void)_didUpdatePort:(id)a0;
- (void)_didRemovePort:(id)a0;
- (void)_didAddPort:(id)a0;
- (void)_didUpdateAuthorizationStateForPort:(id)a0;
- (void)_handleServiceAdded:(unsigned int)a0;
- (BOOL)_startMatchingNotifications;
- (void)_stopMatchingNotifications;
- (void)_stopMatchingNotificationsAndQueueAllowingQueueDrain:(BOOL)a0;
- (id)initWithMatchingDictionary:(id)a0;
- (id)initWithMatchingDictionary:(id)a0 andDelegate:(id)a1;
- (void)portDidTerminate:(id)a0;
- (void)portDidUpdate:(id)a0;
- (void)portDidUpdateAuthorizationState:(id)a0;

@end
