@interface PPSBasebandDecoder : NSObject <PPSDecoderProtocol>

+ (id)decodeValue:(id)a0 withMetric:(id)a1;
+ (id)flattenResult:(id)a0 withParentKey:(id)a1;
+ (id)hexStringToRawData:(id)a0;
+ (BOOL)isDecodableMetric:(id)a0;
+ (id)transformPayload:(id)a0;

@end
