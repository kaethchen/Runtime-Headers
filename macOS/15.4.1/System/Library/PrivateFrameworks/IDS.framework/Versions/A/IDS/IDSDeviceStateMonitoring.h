@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IDSDeviceStateMonitoring : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *monitors;

@property (readonly, nonatomic) int outToken;
@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableArray *delegateArray;
@property (readonly, nonatomic) unsigned long long currentState;

+ (id)sharedInstanceForNotificationName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)notifyDelegatesAboutNewState:(unsigned long long)a0 token:(int)a1;
- (void)registerForStateUpdates:(id)a0 queue:(id)a1;
- (void)unRegisterForStateUpdates:(id)a0;

@end
