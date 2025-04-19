@interface UARPTLVPersonalizationFTABSubfileEPROBackDeploy : UARPMetaDataTLV16BackDeploy

@property (readonly) unsigned short epro;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setEpro:(unsigned short)a0;
- (id)tlvValue;

@end
