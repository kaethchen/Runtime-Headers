@class MIDI2DeviceInfo, NSArray;

@interface MIDICIDevice : NSObject

@property (nonatomic) unsigned int objectRef;
@property (nonatomic) unsigned int MIDISource;
@property (nonatomic) unsigned int MIDIDestination;
@property (nonatomic) unsigned char functionBlockID;
@property (readonly, nonatomic) MIDI2DeviceInfo *deviceInfo;
@property (readonly, nonatomic) unsigned int MUID;
@property (readonly, nonatomic) BOOL supportsProtocolNegotiation;
@property (readonly, nonatomic) BOOL supportsProfileConfiguration;
@property (readonly, nonatomic) BOOL supportsPropertyExchange;
@property (readonly, nonatomic) BOOL supportsProcessInquiry;
@property (readonly, nonatomic) unsigned long long maxSysExSize;
@property (readonly, nonatomic) unsigned long long maxPropertyExchangeRequests;
@property (readonly, nonatomic) unsigned char deviceType;
@property (readonly, nonatomic) NSArray *profiles;

+ (id)description;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (BOOL)deserialize:(id)a0;
- (id)serializeDescription;
- (BOOL)setProfile:(id)a0 newState:(BOOL)a1 enabledChannelCount:(unsigned short)a2 error:(id *)a3;

@end
