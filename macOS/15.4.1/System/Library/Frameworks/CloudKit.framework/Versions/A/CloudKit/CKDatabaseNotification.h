@class NSString, CKRecordZoneID;

@interface CKDatabaseNotification : CKNotification <CKDatabaseNotification, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
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

@end
