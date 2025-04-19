@interface AVB17221AECPAEMPTPPortIntervalsMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) BOOL logAnnounceIntervalValid;
@property (nonatomic) BOOL logSyncIntervalValid;
@property (nonatomic) BOOL logpDelayRequestIntervalValid;
@property (nonatomic) BOOL loggPTPCapableIntervalValid;
@property (nonatomic) char logAnnounceInterval;
@property (nonatomic) char logSyncInterval;
@property (nonatomic) char logpDelayRequestInterval;
@property (nonatomic) char loggPTPCapableInterval;

+ (id)keyPathsForValuesAffectingLogAnnounceInterval;
+ (id)keyPathsForValuesAffectingLogAnnounceIntervalValid;
+ (id)keyPathsForValuesAffectingLogSyncInterval;
+ (id)keyPathsForValuesAffectingLogSyncIntervalValid;
+ (id)keyPathsForValuesAffectingLoggPTPCapableInterval;
+ (id)keyPathsForValuesAffectingLoggPTPCapableIntervalValid;
+ (id)keyPathsForValuesAffectingLogpDelayRequestInterval;
+ (id)keyPathsForValuesAffectingLogpDelayRequestIntervalValid;

- (id)init;
- (void)setLoggPTPCapableIntervalValid:(BOOL)a0;
- (char)logSyncInterval;
- (char)logAnnounceInterval;
- (BOOL)logAnnounceIntervalValid;
- (BOOL)logSyncIntervalValid;
- (char)loggPTPCapableInterval;
- (BOOL)loggPTPCapableIntervalValid;
- (char)logpDelayRequestInterval;
- (BOOL)logpDelayRequestIntervalValid;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setLogAnnounceInterval:(char)a0;
- (void)setLogAnnounceIntervalValid:(BOOL)a0;
- (void)setLogSyncInterval:(char)a0;
- (void)setLogSyncIntervalValid:(BOOL)a0;
- (void)setLoggPTPCapableInterval:(char)a0;
- (void)setLogpDelayRequestInterval:(char)a0;
- (void)setLogpDelayRequestIntervalValid:(BOOL)a0;

@end
