@class NSArray, NSImage, NSURL, ETSketchMessage, NSMutableArray;

@interface ETVideoMessage : ETMessage {
    NSMutableArray *_playingMessages;
    double _compressedTimeTotal;
    double _compressedTimeLastEventTime;
    double _messageDuration;
}

@property (retain, nonatomic) NSArray *playingMessages;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) NSImage *stillImage;
@property (retain, nonatomic) ETSketchMessage *introMessage;
@property (nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) BOOL canCompressTime;
@property (nonatomic) BOOL pauseTimeCompression;

+ (unsigned short)messageType;

- (id)init;
- (void).cxx_destruct;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (BOOL)isAnimated;
- (double)messageDuration;
- (int)_etpMediaTypeFromETMediaType:(unsigned long long)a0;
- (unsigned long long)_mediaTypeFromETPVideoType:(int)a0;
- (double)compressTimeSinceStartOfMessage:(double)a0;
- (id)messageTypeAsString;
- (BOOL)shouldLoopDuringPlayback;

@end
