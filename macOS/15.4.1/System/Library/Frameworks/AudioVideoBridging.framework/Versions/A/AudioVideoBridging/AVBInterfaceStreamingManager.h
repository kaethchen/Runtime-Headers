@class IOKConnection, IOKNotificationPort, AVBInterface, IOKInterestNotification, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface AVBInterfaceStreamingManager : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificaitonPort;
    IOKInterestNotification *_interestNotification;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
}

@property (readonly, weak) AVBInterface *interface;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)serviceTerminated;
- (BOOL)destroyInputStreamWithID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)nextAvailableStreamIndex:(unsigned short *)a0 error:(id *)a1;
- (BOOL)allocateBandwidth:(unsigned long long)a0 forOutputStream:(unsigned long long)a1 error:(id *)a2;
- (BOOL)createIIDCIOSurfaceInputStreamWithID:(unsigned long long)a0 onVLANID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 withMaximumSurfacesPerSecond:(unsigned int)a4 maximumSurfaceDataLength:(unsigned long long)a5 maximumSurfaceDataLengthPerPDU:(unsigned long long)a6 error:(id *)a7;
- (BOOL)createIIDCIOSurfaceOutputStreamWithID:(unsigned long long)a0 onVLANID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 withMaximumSurfacesPerSecond:(unsigned int)a4 maximumSurfaceDataLength:(unsigned long long)a5 maximumSurfaceDataLengthPerPDU:(unsigned long long)a6 streamBandwidth:(unsigned long long)a7 error:(id *)a8;
- (BOOL)createUserSpaceInputStreamWithID:(unsigned long long)a0 onVLANID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 withNumberOfPackets:(unsigned int)a4 ofHeaderSize:(unsigned int)a5 andPayloadSize:(unsigned int)a6 error:(id *)a7;
- (BOOL)createUserSpaceInputStreamWithID:(unsigned long long)a0 usingEtherType:(unsigned short)a1 onVLANID:(unsigned short)a2 withPriorityCodePoint:(unsigned char)a3 andDestiantionMAC:(id)a4 withNumberOfPackets:(unsigned int)a5 ofHeaderSize:(unsigned int)a6 andPayloadSize:(unsigned int)a7 error:(id *)a8;
- (BOOL)createUserSpaceOutputStreamWithID:(unsigned long long)a0 onVLANID:(unsigned short)a1 withPriorityCodePoint:(unsigned char)a2 andDestiantionMAC:(id)a3 withNumberOfPackets:(unsigned int)a4 ofHeaderSize:(unsigned int)a5 andPayloadSize:(unsigned int)a6 streamBandwidth:(unsigned long long)a7 error:(id *)a8;
- (BOOL)createUserSpaceOutputStreamWithID:(unsigned long long)a0 usingEtherType:(unsigned short)a1 onVLANID:(unsigned short)a2 withPriorityCodePoint:(unsigned char)a3 andDestiantionMAC:(id)a4 withNumberOfPackets:(unsigned int)a5 ofHeaderSize:(unsigned int)a6 andPayloadSize:(unsigned int)a7 streamBandwidth:(unsigned long long)a8 error:(id *)a9;
- (BOOL)destroyOutputStreamWithID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)getQueue:(unsigned int)a0 fetchDelay:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)getQueue:(unsigned int)a0 mbufLaunchTimeOffset:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)getQueue:(unsigned int)a0 physicalLaunchTimeOffset:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)releaseBandwidthForOutputStream:(unsigned long long)a0 error:(id *)a1;
- (BOOL)releaseStreamIndex:(unsigned short)a0 error:(id *)a1;
- (unsigned long long)streamIDForStreamIndex:(unsigned short)a0;

@end
