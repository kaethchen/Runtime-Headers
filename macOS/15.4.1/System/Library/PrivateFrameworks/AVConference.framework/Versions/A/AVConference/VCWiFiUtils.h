@interface VCWiFiUtils : NSObject

+ (BOOL)copyAWDLChannelSequence:(id *)a0 twoPtFourGhzChannelCount:(int *)a1 fiveGhzChannelCount:(int *)a2 dfsChannelCount:(int *)a3 inactiveSlotCount:(int *)a4;
+ (BOOL)copyAWDLChannelSequence:(id *)a0 twoPtFourGhzChannelCount:(int *)a1 fiveGhzChannelCount:(int *)a2 dfsChannelCount:(int *)a3 inactiveSlotCount:(int *)a4 isPresent:(BOOL *)a5;
+ (BOOL)getInfraChannelNumber:(int *)a0 is5Ghz:(BOOL *)a1;
+ (BOOL)getInfraChannelNumber:(int *)a0 is5Ghz:(BOOL *)a1 isPresent:(BOOL *)a2;
+ (BOOL)isWiFiPresent;

@end
