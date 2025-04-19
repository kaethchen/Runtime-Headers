@class _TSF_TSDgPTPPortStatistics;

@interface _TSF_TSDgPTPFDPtPPort : _TSF_TSDgPTPNetworkPort

@property (retain, nonatomic) _TSF_TSDgPTPPortStatistics *statistics;
@property (nonatomic) char localPDelayLogMeanInterval;
@property (nonatomic) char remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;

- (void).cxx_destruct;
- (char)_localPDelayLogMeanInterval;
- (BOOL)_measuringPDelay;
- (BOOL)_multipleRemotes;
- (char)_remotePDelayLogMeanInterval;
- (id)_statistics;
- (id)initWithService:(id)a0 pid:(int)a1;
- (void)updateProperties;

@end
