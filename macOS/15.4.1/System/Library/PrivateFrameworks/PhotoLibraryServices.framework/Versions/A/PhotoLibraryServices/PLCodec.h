@interface PLCodec : NSObject

+ (id)H264fourCharCode;
+ (id)HEVCfourCharCode;
+ (unsigned int)_typeCodeFromString:(id)a0;
+ (BOOL)isPlayableFourCharCodecName:(id)a0;

@end
