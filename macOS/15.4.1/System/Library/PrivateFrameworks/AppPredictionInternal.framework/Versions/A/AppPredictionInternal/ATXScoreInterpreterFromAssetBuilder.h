@interface ATXScoreInterpreterFromAssetBuilder : NSObject

+ (id)scoreInterpretersForAllSubTypes;
+ (id)assetFilenameForSubType:(unsigned char)a0;
+ (id)interpreterFromAssetFilename:(id)a0;
+ (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;

@end
