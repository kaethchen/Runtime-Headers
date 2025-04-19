@interface MAUSBProtocolConfiguration : MAUSBObject

@property (readonly) unsigned int aDataChannelDelayMS;
@property (readonly) unsigned int aManagementChannelDelayMS;
@property (readonly) unsigned int aManagementRequestTimeoutMS;
@property (readonly) unsigned int aTransferTimeoutMS;
@property (readonly) unsigned int aTransferKeepAliveMS;
@property (readonly) unsigned int aBulkTransferRetries;
@property (readonly) unsigned int aControlTransferRetries;
@property (readonly) unsigned int aInterruptTransferRetries;
@property (readonly) unsigned int aManagementRetries;
@property (readonly) unsigned int aTransferSetupRetries;
@property (readonly) unsigned int aTransferTimerTickMS;
@property (readonly) BOOL reliableTransport;

- (id)initWithMediaType:(unsigned long long)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
