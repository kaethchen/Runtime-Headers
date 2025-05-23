@interface SHAudioUtilities : NSObject

+ (id)appendBuffer:(id)a0 toBuffer:(id)a1;
+ (id)audioBufferFromData:(void *)a0 byteSize:(unsigned long long)a1 inFormat:(id)a2;
+ (id)bufferHead:(id)a0 duration:(double)a1;
+ (id)bufferTail:(id)a0 duration:(double)a1;
+ (double)durationOfBuffer:(id)a0;
+ (id)extractFromBuffer:(id)a0 atPosition:(unsigned int)a1 length:(unsigned int)a2;
+ (BOOL)isAudioFormatSupported:(id)a0;
+ (id)splitBuffer:(id)a0 atPosition:(unsigned int)a1;
+ (id)splitBuffer:(id)a0 fromStartPosition:(unsigned int)a1 intoDurationsOfSize:(double)a2;
+ (BOOL)willAudioFormatCauseBufferMutation:(id)a0;

@end
