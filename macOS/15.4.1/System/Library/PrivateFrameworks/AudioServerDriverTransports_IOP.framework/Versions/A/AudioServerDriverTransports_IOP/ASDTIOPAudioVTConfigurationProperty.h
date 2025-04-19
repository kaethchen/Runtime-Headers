@class NSString;

@interface ASDTIOPAudioVTConfigurationProperty : ASDTIOPAudioVTProperty <ASDTConcreteCustomProperty>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configDictForService:(id)a0;

@end
