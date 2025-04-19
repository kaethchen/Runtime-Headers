@class _TSF_TSDgPTPPortStatistics;

@interface _TSF_TSDgPTPFDEtEPort : _TSF_TSDgPTPNetworkPort

@property (retain, nonatomic) _TSF_TSDgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (id)_statistics;
- (id)initWithService:(id)a0 pid:(int)a1;
- (void)updateProperties;

@end
