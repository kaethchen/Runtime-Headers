@interface ASDTIOPAudioVTEnableProperty : ASDTIOPAudioVTUInt32Property

+ (id)configDictForService:(id)a0;

- (id)initWithConfig:(id)a0;
- (BOOL)retrieveUInt32Value:(unsigned int *)a0;
- (BOOL)storeUInt32Value:(unsigned int)a0;

@end
