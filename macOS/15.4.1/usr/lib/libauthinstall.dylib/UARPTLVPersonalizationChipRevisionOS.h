@interface UARPTLVPersonalizationChipRevisionOS : UARPMetaDataTLV32OS

@property (readonly) unsigned int chipRevision;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setChipRevision:(unsigned int)a0;
- (id)tlvValue;

@end
