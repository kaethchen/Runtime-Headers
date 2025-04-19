@class MAUSBEndpointHandle, NSObject, MAUSBProtocolConfiguration;
@protocol OS_dispatch_queue, MAUSBHostRemoteEndpointDelegate;

@interface MAUSBHostRemoteEndpoint : MAUSBObject {
    id<MAUSBHostRemoteEndpointDelegate> _delegate;
    unsigned short _outstandingTransferRequests;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned short outstandingTransferRequests;
@property (readonly) MAUSBEndpointHandle *handle;
@property (readonly) unsigned char deviceAddress;
@property (readonly) unsigned char ssid;
@property (readonly) unsigned char transferType;
@property (readonly) MAUSBProtocolConfiguration *protocolConfig;
@property (readonly) unsigned char state;

- (void).cxx_destruct;
- (id)delegate;
- (void)activate;
- (id)queue;
- (void)setState:(unsigned char)a0;
- (void)reset;
- (void)setOutstandingTransferRequests:(unsigned short)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)halt;
- (void)inactivate;
- (id)initWithDelegate:(id)a0 handle:(id)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 transferType:(unsigned char)a4 protocolConfig:(id)a5 queue:(id)a6;
- (void)inputTransferResponse:(id)a0;
- (void)updateEndpointHandle:(id)a0;

@end
