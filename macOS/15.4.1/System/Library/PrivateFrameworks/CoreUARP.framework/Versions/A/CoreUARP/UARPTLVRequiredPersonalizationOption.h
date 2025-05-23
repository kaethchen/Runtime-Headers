@interface UARPTLVRequiredPersonalizationOption : UARPMetaDataTLV32

@property (readonly) unsigned int tssOption;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setTssOption:(unsigned int)a0;
- (id)tlvValue;

@end
