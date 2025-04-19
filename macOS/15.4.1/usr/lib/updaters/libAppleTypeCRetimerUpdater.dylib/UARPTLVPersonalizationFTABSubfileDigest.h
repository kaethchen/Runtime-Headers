@class NSData;

@interface UARPTLVPersonalizationFTABSubfileDigest : UARPMetaDataTLVData

@property (readonly) NSData *digest;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setDigest:(id)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
