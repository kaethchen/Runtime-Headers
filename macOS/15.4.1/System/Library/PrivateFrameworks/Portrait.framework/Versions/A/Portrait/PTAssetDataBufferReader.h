@class AVAssetReaderTrackOutput, NSString, AVAssetReader, NSURL;

@interface PTAssetDataBufferReader : NSObject <PTAssetComponentReader>

@property (class, readonly) Class frameClass;
@property (class, readonly) NSString *_movieFilename;
@property (class, readonly) NSString *_sequenceDirectoryName;
@property (class, readonly) NSString *_movieExtension;
@property (class, readonly) NSString *_sequenceExtension;
@property (class, readonly) NSString *_sequenceInfoFilename;

@property (readonly, nonatomic) NSURL *dataURL;
@property (readonly, nonatomic) NSURL *movieURL;
@property (readonly, nonatomic) NSURL *sequenceURL;
@property (nonatomic) unsigned long long nextIndex;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *disparityTrackOutput;
@property (readonly, nonatomic) NSString *filenameFormat;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) float framesPerSecond;
@property (readonly, nonatomic) BOOL isVector3Format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)globals;
- (BOOL)_startReadingSequenceWithError:(id *)a0;
- (id)_copyNextFrame_movie;
- (id)_copyNextFrame_sequence;
- (struct __CVBuffer { } *)_copyPixelBufferFromURL:(id)a0;
- (id)_frameInstance;
- (BOOL)_startReadingMovieWithError:(id *)a0;
- (id)copyNextFrame;
- (BOOL)startReadingWithError:(id *)a0;

@end
