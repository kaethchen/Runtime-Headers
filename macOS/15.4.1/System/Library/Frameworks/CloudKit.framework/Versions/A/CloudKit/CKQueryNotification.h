@class NSDictionary, CKRecordID, NSString;

@interface CKQueryNotification : CKNotification <CKDatabaseNotification, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long queryNotificationReason;
@property (copy, nonatomic) NSDictionary *recordFields;
@property (copy, nonatomic) CKRecordID *recordID;
@property (nonatomic) long long databaseScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)a0;
- (BOOL)isPublicDatabase;

@end
