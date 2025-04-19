@interface CoreCECBusClient : CoreCECBus

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (id)addDeviceWithAttributes:(id)a0 error:(id *)a1;
- (void)removeDeviceWithType:(unsigned long long)a0;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (BOOL)setTvLanguageCode:(id)a0 error:(id *)a1;

@end
