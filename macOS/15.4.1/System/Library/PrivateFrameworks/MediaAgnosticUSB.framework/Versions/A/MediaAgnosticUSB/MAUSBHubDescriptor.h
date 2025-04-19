@class NSArray;

@interface MAUSBHubDescriptor : MAUSBDescriptor

@property (readonly) NSArray *ports;
@property (readonly) unsigned short wHubCharacteristics;
@property (readonly) unsigned char bPwrOn2PwrGood;
@property (readonly) unsigned char bHubContrCurrent;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPorts:(id)a0 hubCharacteristics:(unsigned short)a1 powerOnToPowerGood:(unsigned char)a2 hubControllerCurrent:(unsigned char)a3;

@end
