@class NSArray, NSMutableArray;

@interface BPSZipMany : BPSPublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic) unsigned long long bufferResultCount;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (id)initWithPublishers:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;

@end
