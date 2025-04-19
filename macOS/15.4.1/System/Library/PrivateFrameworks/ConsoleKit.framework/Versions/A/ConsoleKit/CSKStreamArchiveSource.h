@class NSDate, NSString, NSArray, NSURL, CSKLoadRange, CSKStreamArchiveStatistics, NSObject, NSTimeZone, NSProgress;
@protocol OS_dispatch_queue, CSKLogEventStream;

@interface CSKStreamArchiveSource : CSKStreamSource <CSKStreamSourceTiming>

@property (retain) NSObject<OS_dispatch_queue> *resumeQueue;
@property unsigned long long resumeCount;
@property BOOL invalidated;
@property (nonatomic, getter=isArchiveCorrupted) BOOL archiveCorrupted;
@property unsigned int sourceFileType;
@property (retain) NSObject<OS_dispatch_queue> *streamQueue;
@property (retain) NSArray *streams;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *streamStartTimeZone;
@property (retain, nonatomic) NSTimeZone *streamEndTimeZone;
@property (retain, nonatomic) NSProgress *loadingProgress;
@property (retain) id<CSKLogEventStream> eventCountStream;
@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) CSKStreamArchiveStatistics *processStatistics;
@property (nonatomic) BOOL ignoresStatistics;
@property (copy) CSKLoadRange *loadRange;
@property (copy) CSKLoadRange *maxLoadRange;
@property (copy) CSKLoadRange *currentLoadRange;
@property (readonly) NSArray *availableLoadRanges;
@property unsigned long long loadingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_validateArchiveAtURL:(id)a0 sourceFileType:(unsigned int *)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)stop;
- (void)_invalidate;
- (id)_eventsForConcurrentExecutions:(unsigned long long)a0;
- (void)_eventStreamWithHandler:(id /* block */)a0;
- (id)_streamEntitiesFromStream:(id)a0 number:(unsigned long long)a1 of:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_updateEndDateAndTimezone;
- (void)_updateStartDateAndTimezone;
- (void)eventCountWithHandler:(id /* block */)a0;
- (void)incrementProgressWithCount:(long long)a0;
- (id)initWithArchiveURL:(id)a0 error:(id *)a1;

@end
