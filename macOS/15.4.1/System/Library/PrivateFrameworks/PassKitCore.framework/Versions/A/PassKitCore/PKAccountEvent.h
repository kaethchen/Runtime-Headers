@class NSString, NSSet, NSDate;

@interface PKAccountEvent : NSObject <PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSString *altDSID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL blockNotification;
@property (retain, nonatomic) NSSet *items;
@property (readonly, nonatomic) unsigned long long updateReasons;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;

+ (long long)accountEventTypeFromRecord:(id)a0;
+ (id)accountIdentifierFromRecord:(id)a0;
+ (id)eventIdentifierFromRecordName:(id)a0;
+ (id)recordNameForEventIdentifier:(id)a0;
+ (id)recordNamePrefix;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)recordName;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (void)_encodeServerDataForCloudStoreCoder:(id)a0;
- (void)addUpdateReasons:(unsigned long long)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToAccountEvent:(id)a0;
- (id)recordNameForItem:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (id)updateReasonsDescription;

@end
