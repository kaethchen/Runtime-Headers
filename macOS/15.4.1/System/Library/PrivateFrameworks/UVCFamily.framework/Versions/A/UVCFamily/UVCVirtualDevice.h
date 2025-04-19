@class NSArray, NSDictionary, NSString, NSMutableDictionary;
@protocol UVCDeviceControlInterface;

@interface UVCVirtualDevice : NSObject <UVCDevice> {
    NSMutableDictionary *_interfaceDescFormatMap;
    NSArray *_controls;
    NSDictionary *_properties;
}

@property (readonly) NSDictionary *attributes;
@property (readonly) id<UVCDeviceControlInterface> controlInterface;
@property (readonly) NSArray *streamingInterfaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInterfaceAssociations:(id)a0;

- (void).cxx_destruct;
- (BOOL)activate;
- (void)cancel;
- (void)setDispatchQueue:(id)a0;
- (BOOL)stopStream:(id *)a0;
- (BOOL)startStream:(id)a0 frameInterval:(unsigned long long)a1 error:(id *)a2;
- (id)getCurrentValue:(id)a0 error:(id *)a1;
- (id)getValue:(id)a0 bRequestType:(unsigned long long)a1 bRequestDataLength:(unsigned long long)a2 error:(id *)a3;
- (id)initWithAssociation:(id)a0 deviceDescriptor:(id)a1 currentConfigurationDescriptor:(id)a2 properties:(id)a3;
- (BOOL)parseConfigurationDescriptor:(id)a0 configurationDescriptor:(id)a1;
- (BOOL)parseControlInterfaceCSDescriptors:(id)a0 csDescriptors:(id)a1;
- (BOOL)parseInterfaceDescriptor:(id)a0 configurationDescriptor:(id)a1;
- (BOOL)parseStreamInterfaceCSDescriptors:(id)a0 csDescriptors:(id)a1;
- (void)sendStreamData:(id)a0 error:(id)a1;
- (BOOL)setCurrentValue:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setInterfaceRequestHandler:(id /* block */)a0;

@end
