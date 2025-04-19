@interface UARPTLVPersonalizationChipEpochBackDeploy : UARPMetaDataTLV32BackDeploy

@property (readonly) unsigned int chipEpoch;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setChipEpoch:(unsigned int)a0;
- (id)tlvValue;

@end
