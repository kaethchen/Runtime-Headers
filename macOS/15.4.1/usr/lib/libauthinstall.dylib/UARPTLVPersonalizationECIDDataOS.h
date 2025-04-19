@class NSData;

@interface UARPTLVPersonalizationECIDDataOS : UARPMetaDataTLVDataOS

@property (readonly) NSData *ecID;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)generateTLV;
- (void)setEcID:(id)a0;
- (id)tlvValue;

@end
