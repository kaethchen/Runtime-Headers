@interface SiriTTSTrainerAudioQualityHelper : NSObject

+ (id)assessAudioQualityWithBuffers:(id)a0;
+ (id)assessAudioQualityWithPath:(id)a0;
+ (id)assessAudioQualityWithRate:(double)a0 samples:(const float *)a1 count:(unsigned int)a2;

@end
