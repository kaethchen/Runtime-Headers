@class NSUUID, NSString, NSData, NSDate, NWStatsConnProperties;

@interface NWStatsConnSnapshot : NWStatsSnapshot {
    NSString *_processName;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    double _startTimeInterval;
    double _snapshotTimeInterval;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_cuuid;
    NSUUID *_puuid;
    NSUUID *_flowuuid;
    unsigned int _flags;
    struct nstat_msg_src_update_conn { struct nstat_msg_hdr { unsigned long long context; unsigned int type; unsigned short length; unsigned short flags; } hdr; unsigned long long srcref; unsigned long long event_flags; struct nstat_counts { unsigned long long nstat_rxpackets; unsigned long long nstat_rxbytes; unsigned long long nstat_txpackets; unsigned long long nstat_txbytes; unsigned long long nstat_cell_rxbytes; unsigned long long nstat_cell_txbytes; unsigned long long nstat_wifi_rxbytes; unsigned long long nstat_wifi_txbytes; unsigned long long nstat_wired_rxbytes; unsigned long long nstat_wired_txbytes; unsigned int nstat_rxduplicatebytes; unsigned int nstat_rxoutoforderbytes; unsigned int nstat_txretransmit; unsigned int nstat_connectattempts; unsigned int nstat_connectsuccesses; unsigned int nstat_min_rtt; unsigned int nstat_avg_rtt; unsigned int nstat_var_rtt; } counts; unsigned int provider; unsigned char reserved[4]; struct nstat_connection_descriptor { unsigned long long start_timestamp; unsigned long long timestamp; unsigned long long upid; unsigned long long eupid; unsigned int pid; unsigned int epid; unsigned int ifnet_properties; char pname[64]; unsigned char uuid[16]; unsigned char euuid[16]; unsigned char cuuid[16]; unsigned char puuid[16]; unsigned char fuuid[16]; unsigned int persona_id; unsigned int uid; unsigned char reserved[4]; } conn_desc; } _nstat_update;
    struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned int x13; unsigned int x14; unsigned char x15[4]; } *_descriptor;
    NWStatsConnProperties *_currentProperties;
    NWStatsConnProperties *_ancestralProperties;
}

@property (retain, nonatomic) NWStatsConnProperties *currentProperties;
@property (retain, nonatomic) NWStatsConnProperties *ancestralProperties;
@property (readonly, nonatomic) unsigned long long connStartContinuousTime;
@property (readonly, nonatomic) NSDate *connStartTimestamp;
@property (readonly, nonatomic) NSDate *connSnapshotTimestamp;
@property (readonly, nonatomic) double connStartTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) double connSnapshotTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) double connStartTimeIntervalSince1970;
@property (readonly, nonatomic) double connSnapshotTimeIntervalSince1970;
@property (readonly, nonatomic) double connDuration;
@property (readonly, nonatomic) NSUUID *cuuid;
@property (readonly, nonatomic) NSUUID *puuid;
@property (readonly, nonatomic) NSUUID *flowuuid;
@property (readonly, nonatomic) BOOL hasNetAccess;
@property (readonly, nonatomic) NSData *remoteAddress;
@property (readonly, nonatomic) unsigned short remotePort;
@property (readonly, nonatomic) NSData *parametersTLV;
@property (readonly, nonatomic) NSData *ancestralParametersTLV;

- (id)description;
- (void).cxx_destruct;
- (id)uuid;
- (unsigned int)uid;
- (id)provider;
- (id)processName;
- (int)processID;
- (unsigned long long)sourceIdentifier;
- (unsigned int)personaID;
- (id)domainName;
- (int)epid;
- (id)euuid;
- (BOOL)isSilent;
- (unsigned long long)eventFlags;
- (id)snapshotType;
- (unsigned long long)uniqueProcessID;
- (id)_connDescriptorDictionaryForm:(struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned int x13; unsigned int x14; unsigned char x15[4]; } *)a0;
- (id)dictionaryForm;
- (id)domainAttributedBundleId;
- (id)domainOwner;
- (id)domainTrackerContext;
- (unsigned long long)eupid;
- (id)initWithConnUpdate:(const struct nstat_msg_src_update_conn { struct nstat_msg_hdr { unsigned long long x0; unsigned int x1; unsigned short x2; unsigned short x3; } x0; unsigned long long x1; unsigned long long x2; struct nstat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; } x3; unsigned int x4; unsigned char x5[4]; struct nstat_connection_descriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[64]; unsigned char x8[16]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned int x13; unsigned int x14; unsigned char x15[4]; } x6; } *)a0 startTime:(double)a1 flowFlags:(unsigned int)a2;
- (BOOL)isNonAppInitiated;
- (BOOL)isTracker;
- (void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)a0;
- (id)snapshotTypeLowerCase;

@end
