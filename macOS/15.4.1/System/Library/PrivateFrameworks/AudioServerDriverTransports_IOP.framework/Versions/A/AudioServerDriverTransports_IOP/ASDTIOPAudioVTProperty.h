@class NSString, ASDTIOPAudioVTDevice;

@interface ASDTIOPAudioVTProperty : ASDTCustomProperty <ASDTIOServiceDependency>

@property (weak, nonatomic) ASDTIOPAudioVTDevice *vtDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;

@end
