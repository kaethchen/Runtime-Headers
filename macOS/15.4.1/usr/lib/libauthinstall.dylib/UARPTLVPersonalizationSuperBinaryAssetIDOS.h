@interface UARPTLVPersonalizationSuperBinaryAssetIDOS : UARPMetaDataTLV16OS

@property (readonly) unsigned short assetID;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setAssetID:(unsigned short)a0;
- (id)tlvValue;

@end
