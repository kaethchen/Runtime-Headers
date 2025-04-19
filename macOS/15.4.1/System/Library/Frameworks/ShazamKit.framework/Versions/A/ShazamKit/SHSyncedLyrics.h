@class NSArray, NSTimer, NSDate;
@protocol SHSyncedLyricsDelegate;

@interface SHSyncedLyrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *lines;
@property (retain) NSArray *songwriters;
@property (retain) NSTimer *timer;
@property (readonly) NSDate *lyricsStartDate;
@property double timeWarp;
@property (weak) id<SHSyncedLyricsDelegate> delegate;
@property double preCueDuration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)startSyncing;
- (void)stopSyncing;
- (id)currentLyricLineForOffset:(double)a0;
- (double)fireTimeForLine:(id)a0;
- (id)initWithLyricsStartDate:(id)a0 lines:(id)a1 songwriters:(id)a2;
- (double)offsetFromStartDate;
- (double)timeToLine:(id)a0 afterDuration:(double)a1;

@end
