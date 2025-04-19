@class NSString, NSUUID, NSDictionary, NSDate;

@interface IMParticipantChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding, IMItemErrorProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long changeType;
@property (retain, nonatomic) NSString *otherHandle;
@property (retain, nonatomic) NSString *otherUnformattedID;
@property (retain, nonatomic) NSString *otherCountryCode;
@property (retain, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic) unsigned int errorCode;
@property (retain, nonatomic) NSDictionary *messageSummaryInfo;
@property (nonatomic) BOOL unattributed;
@property (retain, nonatomic) NSDate *timeRead;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyDictionaryRepresentation;

@end
