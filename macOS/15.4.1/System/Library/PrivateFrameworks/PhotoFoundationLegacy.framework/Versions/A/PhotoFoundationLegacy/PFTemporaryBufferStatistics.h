@interface PFTemporaryBufferStatistics : NSObject

@property long long recentBytes;
@property int recentCount;
@property long long recentHitBytes;
@property int recentHitCount;
@property long long retiredBytes;
@property int retiredCount;
@property long long retiredHitBytes;
@property int retiredHitCount;
@property long long newTemporaryBuffersBytes;
@property int newTemporaryBuffersCount;
@property long long purgedBytes;
@property int purgedCount;
@property long long recycledBytes;
@property int recycledCount;
@property long long recycledPurgableBytes;
@property int recycledPurgableCount;
@property long long recycledPurgedBytes;
@property int recycledPurgedCount;

@end
