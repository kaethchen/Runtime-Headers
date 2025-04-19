@interface PPSModelURLDecoder : NSObject <PPSDecoderProtocol>

+ (id)decodeValue:(id)a0 withMetric:(id)a1;
+ (BOOL)isDecodableMetric:(id)a0;
+ (id)prefixDecodingDictionary;

@end
