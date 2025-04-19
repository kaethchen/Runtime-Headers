@interface UARPTLVPersonalizationFTABSubfileESECOS : UARPMetaDataTLV16OS

@property (readonly) unsigned short esec;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setEsec:(unsigned short)a0;
- (id)tlvValue;

@end
