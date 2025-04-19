@class NSString, AVBIOKPTPNetworkPort, NSPointerArray;

@interface AVBPTPNetworkPort : AVBPTPPort {
    AVBIOKPTPNetworkPort *_implIOKit;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (nonatomic) unsigned long long remoteClockIdentity;
@property (nonatomic) unsigned short remotePortNumber;
@property (nonatomic) BOOL remoteIsSameDevice;
@property (nonatomic, getter=isASCapable) BOOL asCapable;
@property (nonatomic) unsigned int propagationDelay;
@property (nonatomic) unsigned int maximumPropagationDelay;
@property (nonatomic) unsigned int minimumPropagationDelay;
@property (nonatomic) unsigned int propagationDelayLimit;
@property (nonatomic) unsigned int maximumRawDelay;
@property (nonatomic) unsigned int minimumRawDelay;
@property (nonatomic) char localSyncLogMeanInterval;
@property (nonatomic) char remoteSyncLogMeanInterval;
@property (nonatomic) char localAnnounceLogMeanInterval;
@property (nonatomic) char remoteAnnounceLogMeanInterval;
@property (nonatomic) unsigned char localLinkType;
@property (nonatomic) unsigned char remoteLinkType;
@property (nonatomic) unsigned char localTimestampingMode;
@property (nonatomic) unsigned char remoteTimestampingMode;
@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) unsigned char remoteOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasRemoteFrequencyToleranceLower;
@property (nonatomic) int remoteFrequencyToleranceLower;
@property (nonatomic) BOOL hasRemoteFrequencyToleranceUpper;
@property (nonatomic) int remoteFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;
@property (nonatomic) BOOL hasRemoteFrequencyStabilityLower;
@property (nonatomic) int remoteFrequencyStabilityLower;
@property (nonatomic) BOOL hasRemoteFrequencyStabilityUpper;
@property (nonatomic) int remoteFrequencyStabilityUpper;
@property (copy, nonatomic) NSString *sourceAddressString;
@property (copy, nonatomic) NSString *destinationAddressString;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *interfaceName;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)syncTimeout;
- (BOOL)deregisterAsyncCallbackError:(id *)a0;
- (BOOL)disablePortError:(id *)a0;
- (BOOL)enablePortError:(id *)a0;
- (BOOL)registerAsyncCallbackError:(id *)a0;
- (BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)a0 syncMessageInterval:(char)a1 announceMessageInterval:(char)a2 error:(id *)a3;
- (void)serviceTerminated;
- (void)announceTimeout;
- (void)_updateFromProperties:(id)a0;
- (void)changedASCapable:(BOOL)a0;
- (void)changedAdministrativeEnable:(BOOL)a0;
- (id)initWithImplIOKit:(id)a0;

@end
