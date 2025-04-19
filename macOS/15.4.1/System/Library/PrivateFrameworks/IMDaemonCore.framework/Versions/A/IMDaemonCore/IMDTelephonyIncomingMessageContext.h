@class NSString, NSMutableArray;

@interface IMDTelephonyIncomingMessageContext : NSObject <NSCopying>

@property (nonatomic) long long category;
@property (nonatomic) long long subCategory;
@property (retain, nonatomic) NSString *spamExtensionName;
@property (nonatomic) BOOL isSendEnabled;
@property (nonatomic) long long capability;
@property (retain, nonatomic) NSString *originalAlias;
@property (retain, nonatomic) NSString *chatIdentifier;
@property (retain, nonatomic) NSString *mySIMIDString;
@property (retain, nonatomic) NSString *myNumberString;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSString *senderUnformatted;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) NSMutableArray *unformattedIDs;
@property (retain, nonatomic) NSMutableArray *countryCodes;
@property (nonatomic) unsigned char style;
@property (nonatomic) BOOL wasRelayed;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *originalGroupID;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isGroupMessagingEnabled;
@property (readonly, nonatomic) BOOL isGroupChat;
@property (readonly, nonatomic) NSString *destinationCallerID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)replaceCountryCodes:(id)a0;
- (void)replaceParticipants:(id)a0;
- (void)replaceUnformattedIDs:(id)a0;

@end
