@class NSString, NSUUID, NSData, NSDate;

@interface RPNearFieldTapEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *applicationDomain;
@property (readonly, nonatomic) NSString *applicationLabel;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL isSameAccount;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSData *pkData;
@property (readonly, nonatomic) NSUUID *bonjourListenerUUID;
@property (readonly, nonatomic) BOOL shouldForceSingleBandAWDLMode;
@property (readonly, nonatomic) BOOL isKnownIdentity;
@property (readonly, nonatomic) BOOL isUnsupportedApplicationLabel;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithIdentifier:(id)a0 applicationLabel:(id)a1 pkData:(id)a2 bonjourListenerUUID:(id)a3 isSameAccount:(BOOL)a4 contactID:(id)a5 accountID:(id)a6 forceSingleBandAWDLMode:(BOOL)a7 knownIdentity:(BOOL)a8 isUnsupportedApplicationLabel:(BOOL)a9 flags:(unsigned int)a10;

@end
