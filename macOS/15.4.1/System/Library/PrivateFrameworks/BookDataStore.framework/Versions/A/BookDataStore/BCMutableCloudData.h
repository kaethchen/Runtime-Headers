@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCloudData : NSObject <BCCloudData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL deletedFlag;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long editGeneration;
@property (nonatomic) long long syncGeneration;
@property (copy, nonatomic) NSString *localRecordID;
@property (copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)recordType;
- (id)zoneName;
- (id)initWithRecord:(id)a0;
- (id)ckSystemFields;
- (id)configuredRecordFromAttributes;
- (void)incrementEditGeneration;
- (id)initWithCloudData:(id)a0;

@end
