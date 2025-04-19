@interface UARPTLVPersonalizationEnableMixMatchOS : UARPMetaDataTLV8OS

@property (readonly) unsigned char enableMixMatch;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setEnableMixMatch:(unsigned char)a0;
- (id)tlvValue;

@end
