@class GEOWiFiPasspointInfo, NSString, GEOLocation, GEOWiFiBeaconInfo, GEOWiFiHarvestLabel, NSMutableArray, PBDataReader;

@interface GEOWiFiConnectionQuality : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _authTraits;
    struct { int *list; unsigned long long count; unsigned long long size; } _nameAttributes;
    struct { int *list; unsigned long long count; unsigned long long size; } _traits;
    GEOWiFiBeaconInfo *_beaconInfo;
    unsigned long long _bytesInActive;
    unsigned long long _bytesInTotal;
    unsigned long long _bytesOutActive;
    unsigned long long _bytesOutTotal;
    unsigned long long _dataStalls;
    NSMutableArray *_essMembers;
    unsigned long long _failedConnections;
    unsigned long long _faultyStay;
    NSMutableArray *_feedbacks;
    NSMutableArray *_hotspotHelperProviders;
    NSString *_identifier;
    GEOWiFiHarvestLabel *_label;
    GEOLocation *_location;
    unsigned long long _lowLQMStay;
    unsigned long long _lowqStay;
    unsigned long long _lqmTranCount;
    NSMutableArray *_nearbyBSSs;
    unsigned long long _overAllStay;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    GEOWiFiPasspointInfo *_passpointInfo;
    unsigned long long _reTxBytes;
    unsigned long long _receivedDupes;
    double _responsivenessScore;
    NSMutableArray *_roamStates;
    unsigned long long _rxOutOfOrderBytes;
    NSMutableArray *_speedTests;
    unsigned long long _successfulConnections;
    unsigned long long _timeOfDay;
    unsigned long long _timestamp;
    NSString *_uniqueID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _apMode;
    int _associationLength;
    int _associationReason;
    unsigned int _band;
    int _captiveDetermination;
    int _cca;
    unsigned int _channelWidth;
    unsigned int _channel;
    int _clientAssociationSubreason;
    int _disassociationReason;
    int _dohAvailability;
    int _networkOrigin;
    int _networkType;
    unsigned int _phyMode;
    float _roundTripTimeAvgActive;
    float _roundTripTimeAvg;
    float _roundTripTimeMinActive;
    float _roundTripTimeMin;
    float _roundTripTimeVarActive;
    float _roundTripTimeVar;
    int _rssi;
    int _snr;
    unsigned int _sslConnectionCount;
    unsigned int _sslErrorCount;
    float _topDLRate;
    int _type;
    unsigned int _wasCaptiveFlag;
    BOOL _hotspot20;
    BOOL _isEdgeBSS;
    BOOL _isKnownGood;
    BOOL _lowInternetDL;
    BOOL _lowInternetUL;
    struct { unsigned char has_bytesInActive : 1; unsigned char has_bytesInTotal : 1; unsigned char has_bytesOutActive : 1; unsigned char has_bytesOutTotal : 1; unsigned char has_dataStalls : 1; unsigned char has_failedConnections : 1; unsigned char has_faultyStay : 1; unsigned char has_lowLQMStay : 1; unsigned char has_lowqStay : 1; unsigned char has_lqmTranCount : 1; unsigned char has_overAllStay : 1; unsigned char has_packetsIn : 1; unsigned char has_packetsOut : 1; unsigned char has_reTxBytes : 1; unsigned char has_receivedDupes : 1; unsigned char has_responsivenessScore : 1; unsigned char has_rxOutOfOrderBytes : 1; unsigned char has_successfulConnections : 1; unsigned char has_timeOfDay : 1; unsigned char has_timestamp : 1; unsigned char has_apMode : 1; unsigned char has_associationLength : 1; unsigned char has_associationReason : 1; unsigned char has_band : 1; unsigned char has_captiveDetermination : 1; unsigned char has_cca : 1; unsigned char has_channelWidth : 1; unsigned char has_channel : 1; unsigned char has_clientAssociationSubreason : 1; unsigned char has_disassociationReason : 1; unsigned char has_dohAvailability : 1; unsigned char has_networkOrigin : 1; unsigned char has_networkType : 1; unsigned char has_phyMode : 1; unsigned char has_roundTripTimeAvgActive : 1; unsigned char has_roundTripTimeAvg : 1; unsigned char has_roundTripTimeMinActive : 1; unsigned char has_roundTripTimeMin : 1; unsigned char has_roundTripTimeVarActive : 1; unsigned char has_roundTripTimeVar : 1; unsigned char has_rssi : 1; unsigned char has_snr : 1; unsigned char has_sslConnectionCount : 1; unsigned char has_sslErrorCount : 1; unsigned char has_topDLRate : 1; unsigned char has_type : 1; unsigned char has_wasCaptiveFlag : 1; unsigned char has_hotspot20 : 1; unsigned char has_isEdgeBSS : 1; unsigned char has_isKnownGood : 1; unsigned char has_lowInternetDL : 1; unsigned char has_lowInternetUL : 1; unsigned char read_authTraits : 1; unsigned char read_nameAttributes : 1; unsigned char read_traits : 1; unsigned char read_beaconInfo : 1; unsigned char read_essMembers : 1; unsigned char read_feedbacks : 1; unsigned char read_hotspotHelperProviders : 1; unsigned char read_identifier : 1; unsigned char read_label : 1; unsigned char read_location : 1; unsigned char read_nearbyBSSs : 1; unsigned char read_passpointInfo : 1; unsigned char read_roamStates : 1; unsigned char read_speedTests : 1; unsigned char read_uniqueID : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL hasOverAllStay;
@property (nonatomic) unsigned long long overAllStay;
@property (nonatomic) BOOL hasFaultyStay;
@property (nonatomic) unsigned long long faultyStay;
@property (nonatomic) BOOL hasLowLQMStay;
@property (nonatomic) unsigned long long lowLQMStay;
@property (nonatomic) BOOL hasLowqStay;
@property (nonatomic) unsigned long long lowqStay;
@property (nonatomic) BOOL hasLqmTranCount;
@property (nonatomic) unsigned long long lqmTranCount;
@property (nonatomic) BOOL hasSuccessfulConnections;
@property (nonatomic) unsigned long long successfulConnections;
@property (nonatomic) BOOL hasFailedConnections;
@property (nonatomic) unsigned long long failedConnections;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) BOOL hasBytesInTotal;
@property (nonatomic) unsigned long long bytesInTotal;
@property (nonatomic) BOOL hasBytesOutTotal;
@property (nonatomic) unsigned long long bytesOutTotal;
@property (nonatomic) BOOL hasBytesInActive;
@property (nonatomic) unsigned long long bytesInActive;
@property (nonatomic) BOOL hasBytesOutActive;
@property (nonatomic) unsigned long long bytesOutActive;
@property (nonatomic) BOOL hasReTxBytes;
@property (nonatomic) unsigned long long reTxBytes;
@property (nonatomic) BOOL hasDataStalls;
@property (nonatomic) unsigned long long dataStalls;
@property (nonatomic) BOOL hasReceivedDupes;
@property (nonatomic) unsigned long long receivedDupes;
@property (nonatomic) BOOL hasRxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) BOOL hasRoundTripTimeMin;
@property (nonatomic) float roundTripTimeMin;
@property (nonatomic) BOOL hasRoundTripTimeAvg;
@property (nonatomic) float roundTripTimeAvg;
@property (nonatomic) BOOL hasRoundTripTimeVar;
@property (nonatomic) float roundTripTimeVar;
@property (nonatomic) BOOL hasRoundTripTimeMinActive;
@property (nonatomic) float roundTripTimeMinActive;
@property (nonatomic) BOOL hasRoundTripTimeAvgActive;
@property (nonatomic) float roundTripTimeAvgActive;
@property (nonatomic) BOOL hasRoundTripTimeVarActive;
@property (nonatomic) float roundTripTimeVarActive;
@property (nonatomic) BOOL hasHotspot20;
@property (nonatomic) BOOL hotspot20;
@property (nonatomic) BOOL hasBand;
@property (nonatomic) unsigned int band;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelWidth;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) int snr;
@property (nonatomic) BOOL hasCca;
@property (nonatomic) int cca;
@property (nonatomic) BOOL hasPhyMode;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) unsigned long long timeOfDay;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasWasCaptiveFlag;
@property (nonatomic) unsigned int wasCaptiveFlag;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) unsigned long long traitsCount;
@property (readonly, nonatomic) int *traits;
@property (nonatomic) BOOL hasCaptiveDetermination;
@property (nonatomic) int captiveDetermination;
@property (nonatomic) BOOL hasAssociationLength;
@property (nonatomic) int associationLength;
@property (readonly, nonatomic) unsigned long long authTraitsCount;
@property (readonly, nonatomic) int *authTraits;
@property (nonatomic) BOOL hasNetworkOrigin;
@property (nonatomic) int networkOrigin;
@property (nonatomic) BOOL hasTopDLRate;
@property (nonatomic) float topDLRate;
@property (nonatomic) BOOL hasLowInternetUL;
@property (nonatomic) BOOL lowInternetUL;
@property (nonatomic) BOOL hasLowInternetDL;
@property (nonatomic) BOOL lowInternetDL;
@property (nonatomic) BOOL hasIsKnownGood;
@property (nonatomic) BOOL isKnownGood;
@property (nonatomic) BOOL hasIsEdgeBSS;
@property (nonatomic) BOOL isEdgeBSS;
@property (nonatomic) BOOL hasAssociationReason;
@property (nonatomic) int associationReason;
@property (nonatomic) BOOL hasDisassociationReason;
@property (nonatomic) int disassociationReason;
@property (retain, nonatomic) NSMutableArray *essMembers;
@property (retain, nonatomic) NSMutableArray *nearbyBSSs;
@property (retain, nonatomic) NSMutableArray *feedbacks;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *roamStates;
@property (retain, nonatomic) NSMutableArray *speedTests;
@property (nonatomic) BOOL hasSslConnectionCount;
@property (nonatomic) unsigned int sslConnectionCount;
@property (nonatomic) BOOL hasSslErrorCount;
@property (nonatomic) unsigned int sslErrorCount;
@property (nonatomic) BOOL hasApMode;
@property (nonatomic) int apMode;
@property (nonatomic) BOOL hasClientAssociationSubreason;
@property (nonatomic) int clientAssociationSubreason;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) GEOWiFiHarvestLabel *label;
@property (readonly, nonatomic) BOOL hasPasspointInfo;
@property (retain, nonatomic) GEOWiFiPasspointInfo *passpointInfo;
@property (retain, nonatomic) NSMutableArray *hotspotHelperProviders;
@property (readonly, nonatomic) unsigned long long nameAttributesCount;
@property (readonly, nonatomic) int *nameAttributes;
@property (nonatomic) BOOL hasDohAvailability;
@property (nonatomic) int dohAvailability;
@property (readonly, nonatomic) BOOL hasBeaconInfo;
@property (retain, nonatomic) GEOWiFiBeaconInfo *beaconInfo;
@property (nonatomic) BOOL hasResponsivenessScore;
@property (nonatomic) double responsivenessScore;

+ (Class)essMembersType;
+ (Class)feedbackType;
+ (Class)hotspotHelperProviderType;
+ (BOOL)isValid:(id)a0;
+ (Class)nearbyBSSType;
+ (Class)roamStatesType;
+ (Class)speedTestType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsTraits:(id)a0;
- (int)StringAsAssociationLength:(id)a0;
- (int)StringAsCaptiveDetermination:(id)a0;
- (int)StringAsClientAssociationSubreason:(id)a0;
- (int)StringAsDisassociationReason:(id)a0;
- (void)clearEssMembers;
- (void)clearNearbyBSSs;
- (unsigned long long)nearbyBSSsCount;
- (unsigned long long)speedTestsCount;
- (id)traitsAsString:(int)a0;
- (int)StringAsApMode:(id)a0;
- (int)StringAsAssociationReason:(id)a0;
- (int)StringAsAuthTraits:(id)a0;
- (int)StringAsDohAvailability:(id)a0;
- (int)StringAsNameAttributes:(id)a0;
- (int)StringAsNetworkOrigin:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)apModeAsString:(int)a0;
- (void)clearAuthTraits;
- (void)clearRoamStates;
- (void)clearSpeedTests;
- (unsigned long long)essMembersCount;
- (unsigned long long)roamStatesCount;
- (void)addAuthTraits:(int)a0;
- (void)addEssMembers:(id)a0;
- (void)addFeedback:(id)a0;
- (void)addHotspotHelperProvider:(id)a0;
- (void)addNameAttributes:(int)a0;
- (void)addNearbyBSS:(id)a0;
- (void)addRoamStates:(id)a0;
- (void)addSpeedTest:(id)a0;
- (void)addTraits:(int)a0;
- (id)associationLengthAsString:(int)a0;
- (id)associationReasonAsString:(int)a0;
- (id)authTraitsAsString:(int)a0;
- (int)authTraitsAtIndex:(unsigned long long)a0;
- (id)captiveDeterminationAsString:(int)a0;
- (void)clearFeedbacks;
- (void)clearHotspotHelperProviders;
- (void)clearNameAttributes;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearTraits;
- (id)clientAssociationSubreasonAsString:(int)a0;
- (id)disassociationReasonAsString:(int)a0;
- (id)dohAvailabilityAsString:(int)a0;
- (id)essMembersAtIndex:(unsigned long long)a0;
- (id)feedbackAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbacksCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)hotspotHelperProviderAtIndex:(unsigned long long)a0;
- (unsigned long long)hotspotHelperProvidersCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)nameAttributesAsString:(int)a0;
- (int)nameAttributesAtIndex:(unsigned long long)a0;
- (id)nearbyBSSAtIndex:(unsigned long long)a0;
- (id)networkOriginAsString:(int)a0;
- (id)networkTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (id)roamStatesAtIndex:(unsigned long long)a0;
- (void)setAuthTraits:(int *)a0 count:(unsigned long long)a1;
- (void)setNameAttributes:(int *)a0 count:(unsigned long long)a1;
- (void)setTraits:(int *)a0 count:(unsigned long long)a1;
- (id)speedTestAtIndex:(unsigned long long)a0;
- (int)traitsAtIndex:(unsigned long long)a0;

@end
