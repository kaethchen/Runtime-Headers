@class NSDate;

@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char policy;
@property (readonly, nonatomic) NSDate *startTimestamp;
@property (readonly, nonatomic) NSDate *endTimestamp;
@property (readonly, nonatomic) unsigned long long tilesConsidered;
@property (readonly, nonatomic) unsigned long long successCount;
@property (readonly, nonatomic) unsigned long long failureCount;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPolicy:(unsigned char)a0 startTimestamp:(id)a1 endTimestamp:(id)a2 tilesConsidered:(unsigned long long)a3 successCount:(unsigned long long)a4 failureCount:(unsigned long long)a5 bytesDownloaded:(unsigned long long)a6;

@end
