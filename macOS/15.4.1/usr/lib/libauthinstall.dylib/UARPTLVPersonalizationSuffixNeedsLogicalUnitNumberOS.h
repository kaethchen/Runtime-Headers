@interface UARPTLVPersonalizationSuffixNeedsLogicalUnitNumberOS : UARPMetaDataTLV8OS

@property (readonly) unsigned char suffixNeedsLogicalUnitNumber;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setSuffixNeedsLogicalUnitNumber:(unsigned char)a0;
- (id)tlvValue;

@end
