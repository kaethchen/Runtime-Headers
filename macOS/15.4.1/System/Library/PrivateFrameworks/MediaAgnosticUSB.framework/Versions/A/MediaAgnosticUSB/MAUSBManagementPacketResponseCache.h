@class MAUSBQueue;

@interface MAUSBManagementPacketResponseCache : MAUSBObject {
    unsigned long long _maxSize;
    MAUSBQueue *_queue;
}

- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)insertPacket:(id)a0;
- (id)packetWithDialogToken:(unsigned short)a0;

@end
