@interface UARPTLVPersonalizationECIDBackDeploy : UARPMetaDataTLV64BackDeploy

@property (readonly) unsigned long long ecID;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setEcID:(unsigned long long)a0;
- (id)tlvValue;

@end
