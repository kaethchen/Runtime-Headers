@class MAUSBEndpointHandle, NSString, NSObject, MAUSBProtocolConfiguration;
@protocol OS_dispatch_queue, MAUSBHostTransferManagerDelegate;

@interface MAUSBHostTransferManager : MAUSBObject {
    unsigned short _outstandingTransferRequests;
    unsigned int _logFlag;
    BOOL _flowControlled;
}

@property (readonly, weak) id<MAUSBHostTransferManagerDelegate> delegate;
@property unsigned short outstandingTransferRequests;
@property (readonly) unsigned char deviceAddress;
@property (readonly) unsigned char ssid;
@property (readonly) unsigned char transferType;
@property (readonly) MAUSBProtocolConfiguration *protocolConfig;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *logPrefix;
@property (readonly) BOOL transferRequestAvailable;
@property (readonly) BOOL requestIDAvailable;
@property BOOL flowControlled;
@property (readonly) MAUSBEndpointHandle *handle;

- (void).cxx_destruct;
- (void)sendNextRequest;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6 logPrefix:(id)a7 logFlag:(unsigned int)a8;

@end
