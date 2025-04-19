@class ASDTIOA2Device, NSString, ASDTIOA2Stream;

@interface ASDTIOA2InjectionStream : ASDTExclavesStream <ASDTIOA2Object>

@property (weak, nonatomic) ASDTIOA2Stream *inputStream;
@property (nonatomic) unsigned int userClientID;
@property (readonly, weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIsActive:(BOOL)a0;
- (void)setPhysicalFormat:(id)a0;
- (void)setPhysicalFormats:(id)a0;
- (BOOL)changePhysicalFormat:(id)a0;
- (BOOL)deviceChangedToSamplingRate:(double)a0;
- (id)physicalFormat;
- (int)pmPrepareStream:(int)a0;
- (int)pmPrewarmStream:(int)a0;
- (void)setPhysicalFormat:(id)a0 alwaysNotify:(BOOL)a1;
- (void)asyncDeviceChangedToSamplingRate:(double)a0;
- (id)initWithIOA2Device:(id)a0 inputStream:(id)a1 registryDict:(id)a2;
- (BOOL)synchronizeWithRegistryDictionary:(id)a0;

@end
