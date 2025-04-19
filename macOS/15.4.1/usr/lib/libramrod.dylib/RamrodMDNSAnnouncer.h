@class NSCountedSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RamrodMDNSAnnouncer : NSObject {
    NSCountedSet *_aliases;
    NSMutableDictionary *_services;
    NSMutableDictionary *_serviceTXTs;
    NSMutableDictionary *_serviceNames;
    int _sock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _timerNeedsReset;
}

@property (readonly) unsigned short port;
@property (readonly, copy) NSString *domainName;
@property (readonly, copy) NSString *hostName;
@property (nonatomic) BOOL fastAnnounce;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)activate;
- (void)suspend;
- (void)_invalidate;
- (id)initWithPort:(unsigned short)a0;
- (void)removeService:(id)a0;
- (void)announce;
- (void)addRamDiskServiceWithType:(id)a0 port:(unsigned short)a1;
- (void)_announce;
- (void)_announceWithTTL:(unsigned int)a0;
- (void)_goodbye;
- (void)_resetTimerAndFire:(BOOL)a0;
- (void)addHostAlias:(id)a0;
- (void)addService:(id)a0 port:(unsigned short)a1 name:(id)a2 text:(id)a3;
- (id)initWithPort:(unsigned short)a0 domainName:(id)a1 hostName:(id)a2;
- (void)removeHostAlias:(id)a0;
- (void)removeRamDiskService;

@end
