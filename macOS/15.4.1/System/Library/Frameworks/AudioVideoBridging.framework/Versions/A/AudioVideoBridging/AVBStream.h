@class IOKConnection, IOKNotificationPort, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface AVBStream : NSObject {
    IOKService *_service;
    IOKNotificationPort *_notificationPort;
    unsigned long long _streamHeaderAddress;
    unsigned long long _streamHeaderSize;
    unsigned long long _streamPayloadAddress;
    unsigned long long _streamPayloadSize;
    unsigned long long _streamDescriptorAddress;
    unsigned long long _streamDescriptorSize;
}

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *notificationsQueue;
@property (readonly, nonatomic) IOKConnection *connection;
@property (readonly, nonatomic) void *streamHeaderAddress;
@property (readonly, nonatomic) unsigned long long streamHeaderSize;
@property (readonly, nonatomic) void *streamPayloadAddress;
@property (readonly, nonatomic) unsigned long long streamPayloadSize;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; unsigned long long x8; } *streamDescriptors;
@property (readonly, nonatomic) unsigned int numberOfPackets;
@property (readonly, nonatomic) unsigned long long streamID;

+ (id)IOClassName;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)numberOfPackets;
- (BOOL)changeDestinationMAC:(id)a0 error:(id *)a1;
- (BOOL)deregisterAsyncCallbackWithError:(id *)a0;
- (id)initWithStreamID:(unsigned long long)a0 onInterfaceNamed:(id)a1;
- (BOOL)registerAsyncCallback:(void /* function */ *)a0 withRefcon:(void *)a1 error:(id *)a2;
- (BOOL)resetStreamWithError:(id *)a0;
- (BOOL)startStreamingWithError:(id *)a0;
- (BOOL)stopStreamingWithError:(id *)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; unsigned long long x8; } *)streamDescriptors;
- (void *)streamHeaderAddress;
- (unsigned long long)streamHeaderSize;
- (void *)streamPayloadAddress;
- (unsigned long long)streamPayloadSize;

@end
