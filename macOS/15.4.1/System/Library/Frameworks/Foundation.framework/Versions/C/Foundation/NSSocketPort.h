@class NSData, NSMutableDictionary, NSLock;

@interface NSSocketPort : NSPort {
    struct __CFSocket { } *_receiver;
    NSMutableDictionary *_connectors;
    struct __CFDictionary { } *_loops;
    struct __CFDictionary { } *_data;
    NSData *_signature;
    id _delegate;
    NSLock *_lock;
    unsigned long long _useCount;
    unsigned long long _retainCount;
}

@property (readonly) int protocolFamily;
@property (readonly) int socketType;
@property (readonly) int protocol;
@property (readonly, copy) NSData *address;
@property (readonly) int socket;

+ (void)initialize;
+ (void)_fixNSSocketPortLeak;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)description;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)isValid;
- (id)delegate;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (void)_handleMessage:(struct __CFData { } *)a0 from:(struct __CFData { } *)a1 socket:(struct __CFSocket { } *)a2;
- (void)_incrementUseCount;
- (id)_initRemoteWithSignature:(id)a0;
- (id)_initWithRetainedCFSocket:(struct __CFSocket { } *)a0 protocolFamily:(int)a1 socketType:(int)a2 protocol:(int)a3;
- (struct __CFSocket { } *)_sendingSocketForPort:(id)a0 beforeTime:(double)a1;
- (void)addConnection:(id)a0 toRunLoop:(id)a1 forMode:(id)a2;
- (void)handleConnDeath:(id)a0;
- (void)handlePortMessage:(id)a0;
- (id)initRemoteWithProtocolFamily:(int)a0 socketType:(int)a1 protocol:(int)a2 address:(id)a3;
- (id)initRemoteWithTCPPort:(unsigned short)a0 host:(id)a1;
- (id)initWithProtocolFamily:(int)a0 socketType:(int)a1 protocol:(int)a2 address:(id)a3;
- (id)initWithProtocolFamily:(int)a0 socketType:(int)a1 protocol:(int)a2 socket:(int)a3;
- (id)initWithTCPPort:(unsigned short)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (id)signature;

@end
