@class NSString;

@interface ASDTIOPAudioVTUInt32Property : ASDTIOPAudioVTProperty <ASDTConcreteCustomProperty>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (int)checkPropertyValue:(id)a0;
- (id)retrievePropertyValue;
- (BOOL)storePropertyValue:(id)a0;
- (BOOL)retrieveUInt32Value:(unsigned int *)a0;
- (BOOL)storeUInt32Value:(unsigned int)a0;

@end
