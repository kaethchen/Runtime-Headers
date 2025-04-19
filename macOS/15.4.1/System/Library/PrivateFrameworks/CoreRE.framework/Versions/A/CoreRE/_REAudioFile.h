@class _REAudioFileAssetReader;

@interface _REAudioFile : AVAudioFile

@property (retain, nonatomic) _REAudioFileAssetReader *reader;

+ (id)audioFileWithStream:(struct SeekableInputStream { void /* function */ **x0; } *)a0 ownsStream:(BOOL)a1;
+ (id)audioFileWithData:(id)a0;

- (void).cxx_destruct;
- (id)processingFormat;
- (id)getBackingData;
- (unsigned long long)getReaderFileLength;

@end
