@class NSArray;

@interface MTPAFPlaylistItem : NSObject

@property unsigned long long start;
@property unsigned long long end;
@property (copy) NSArray *metricsData;

- (void).cxx_destruct;
- (id)initWithStart:(unsigned long long)a0 end:(unsigned long long)a1 metricsData:(id)a2;

@end
