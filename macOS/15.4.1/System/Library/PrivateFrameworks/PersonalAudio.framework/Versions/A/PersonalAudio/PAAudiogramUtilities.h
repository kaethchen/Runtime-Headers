@interface PAAudiogramUtilities : NSObject

+ (id)ptaFrequencies;
+ (id)frequencyDictionaryFromOffsets:(id)a0;
+ (struct { unsigned int x0; unsigned int x1; })entryFromData:(id)a0 atIndex:(unsigned int)a1;
+ (id)normalizedOffsetsFromLeftOffsets:(id)a0 andRightOffsets:(id)a1;
+ (id)offsetsSortedByFrequency:(id)a0;
+ (id)presetFrequencies;

@end
