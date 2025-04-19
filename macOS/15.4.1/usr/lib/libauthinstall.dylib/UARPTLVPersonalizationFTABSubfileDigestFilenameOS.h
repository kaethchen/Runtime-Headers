@class NSString;

@interface UARPTLVPersonalizationFTABSubfileDigestFilenameOS : UARPMetaDataTLVStringOS

@property (readonly) NSString *filename;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setFilename:(id)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
