@interface UARPTLVPersonalizationSecurityModeOS : UARPMetaDataTLV32OS

@property (readonly) unsigned int securityMode;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (void)setSecurityMode:(unsigned int)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
