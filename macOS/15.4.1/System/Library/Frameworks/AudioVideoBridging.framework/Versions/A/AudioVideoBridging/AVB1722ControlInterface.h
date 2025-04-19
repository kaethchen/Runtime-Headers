@class IOKConnection, NSString, AVBInterface, IOKNotificationPort, IOKInterestNotification, NSObject, IOKService;
@protocol OS_dispatch_queue;

@interface AVB1722ControlInterface : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_commandsQueue;
    NSObject<OS_dispatch_queue> *_transportQueue;
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    unsigned long long _receiveAddress;
    unsigned long long _receiveSize;
    unsigned long long _transmitAddress;
    unsigned long long _transmitSize;
    unsigned int _transmitWriteHead;
    BOOL _shouldRemove;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *commandsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) IOKConnection *connection;
@property (readonly, copy) NSString *interfaceName;
@property (readonly, weak) AVBInterface *interface;

+ (id)IOClassName;
+ (BOOL)removeFromInterfaceNamed:(id)a0 error:(id *)a1;
+ (BOOL)addToInterfaceNamed:(id)a0 error:(id *)a1;
+ (id)createOnInterface:(id)a0;
+ (id)createOnInterfaceNamed:(id)a0;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)callbackQueue;
- (id)initWithInterface:(id)a0;
- (id)initWithInterfaceName:(id)a0;
- (void)serviceTerminated;
- (BOOL)addControlRoutingID:(unsigned long long)a0;
- (id)commandsQueue;
- (id)initWithService:(id)a0 onInterface:(id)a1;
- (id)initWithService:(id)a0 onInterfaceNamed:(id)a1;
- (void)receivedControlFrameWithInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; unsigned char x7[6]; unsigned char x8[6]; } *)a0 andPayload:(char *)a1 ofLength:(unsigned long long)a2;
- (void)receivedControlFrameWithReadHead:(unsigned int)a0 length:(unsigned int)a1;
- (BOOL)removeControlRoutingID:(unsigned long long)a0;
- (BOOL)sendControlFrameWithInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; unsigned char x7[6]; unsigned char x8[6]; } *)a0 andPayload:(char *)a1 error:(id *)a2;
- (id)stackErrorForError:(id)a0;

@end
