@class NSString, AVPlayerItemAccessLogEventInternal, NSDate;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property (readonly, nonatomic) long long numberOfSegmentsDownloaded;
@property (readonly, nonatomic) long long numberOfMediaRequests;
@property (readonly, nonatomic) NSDate *playbackStartDate;
@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) long long numberOfServerAddressChanges;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) double playbackStartOffset;
@property (readonly, nonatomic) double segmentsDownloadedDuration;
@property (readonly, nonatomic) double durationWatched;
@property (readonly, nonatomic) long long numberOfStalls;
@property (readonly, nonatomic) long long numberOfBytesTransferred;
@property (readonly, nonatomic) double transferDuration;
@property (readonly, nonatomic) double observedBitrate;
@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) double indicatedAverageBitrate;
@property (readonly, nonatomic) double averageVideoBitrate;
@property (readonly, nonatomic) double averageAudioBitrate;
@property (readonly, nonatomic) long long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) double startupTime;
@property (readonly, nonatomic) long long downloadOverdue;
@property (readonly, nonatomic) double observedMaxBitrate;
@property (readonly, nonatomic) double observedMinBitrate;
@property (readonly, nonatomic) double observedBitrateStandardDeviation;
@property (readonly, nonatomic) NSString *playbackType;
@property (readonly, nonatomic) long long mediaRequestsWWAN;
@property (readonly, nonatomic) double switchBitrate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)serviceIdentifier;
- (id)performanceMetrics;
- (long long)entryReasonCode;
- (id)_common_init;
- (double)currentObservedBitrate;

@end
