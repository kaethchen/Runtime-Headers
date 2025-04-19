@class AVBPTPPortStatistics;

@interface AVBPTPFDPtPPort : AVBPTPNetworkPort

@property (retain, nonatomic) AVBPTPPortStatistics *statistics;
@property (nonatomic) char localPDelayLogMeanInterval;
@property (nonatomic) char remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
