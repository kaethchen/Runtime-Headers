@interface UARPTLVPersonalizationManifestEpochOS : UARPMetaDataTLV8OS

@property (readonly) unsigned char manifestEpoch;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setManifestEpoch:(unsigned char)a0;
- (id)tlvValue;

@end
