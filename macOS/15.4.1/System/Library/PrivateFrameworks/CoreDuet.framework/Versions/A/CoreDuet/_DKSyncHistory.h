@class NSDate;

@interface _DKSyncHistory : NSObject

@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, nonatomic) unsigned long long lastDaySyncCount;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLastSyncDate:(id)a0 lastDaySyncCount:(unsigned long long)a1;

@end
