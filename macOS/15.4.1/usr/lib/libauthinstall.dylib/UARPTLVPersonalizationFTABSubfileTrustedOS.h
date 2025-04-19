@interface UARPTLVPersonalizationFTABSubfileTrustedOS : UARPMetaDataTLV16OS

@property (readonly) unsigned short trusted;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (void)setTrusted:(unsigned short)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
