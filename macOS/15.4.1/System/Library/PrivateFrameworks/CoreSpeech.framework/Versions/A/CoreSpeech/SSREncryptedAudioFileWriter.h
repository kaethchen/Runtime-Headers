@class NSURL, NSMutableData;

@interface SSREncryptedAudioFileWriter : NSObject

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSMutableData *writeBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;

- (void).cxx_destruct;
- (BOOL)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (BOOL)endAudio;
- (id)initWithFileUrl:(id)a0 sampleByteDepth:(unsigned long long)a1;

@end
