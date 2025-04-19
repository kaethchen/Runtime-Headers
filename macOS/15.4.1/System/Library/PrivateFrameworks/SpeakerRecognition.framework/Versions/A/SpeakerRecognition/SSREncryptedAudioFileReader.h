@class NSURL, NSData;

@interface SSREncryptedAudioFileReader : NSObject

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSData *aesKey;
@property (retain, nonatomic) NSData *readBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;

- (void).cxx_destruct;
- (id)initWithFileUrl:(id)a0 aesKey:(id)a1 sampleByteDepth:(unsigned long long)a2;
- (BOOL)readAudioChunksWithCallback:(id /* block */)a0;

@end
