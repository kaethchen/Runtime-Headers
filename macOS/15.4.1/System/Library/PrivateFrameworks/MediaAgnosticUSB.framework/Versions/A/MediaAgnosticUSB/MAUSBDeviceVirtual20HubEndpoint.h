@class NSData, NSObject, MAUSBQueue;
@protocol OS_dispatch_queue;

@interface MAUSBDeviceVirtual20HubEndpoint : MAUSBObject {
    NSData *_dataQueue;
    MAUSBQueue *_readQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned char portCount;
@property (readonly) unsigned char address;
@property (readonly) unsigned short maxPacketSize;

- (void).cxx_destruct;
- (void)reset;
- (void)enqueueData:(id)a0;
- (void)clearTransfers;
- (void)completeReads;
- (id)dequeueDataOfLength:(unsigned long long)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPortCount:(unsigned char)a0 usbDeviceAddress:(unsigned char)a1 busNumber:(unsigned char)a2 queue:(id)a3;
- (void)readDataLength:(unsigned int)a0 completion:(id /* block */)a1;

@end
