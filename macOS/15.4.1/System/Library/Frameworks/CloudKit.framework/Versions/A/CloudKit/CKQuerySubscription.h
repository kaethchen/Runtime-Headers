@class NSString, NSPredicate, CKRecordZoneID;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *recordType;
@property (readonly, copy) NSPredicate *predicate;
@property (copy) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long querySubscriptionOptions;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;
- (id)_predicateWithoutCopy;
- (void)_validateQuerySubscriptionOptions:(unsigned long long)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (void)setPredicate_modelMutation:(id)a0;
- (void)setQuerySubscriptionOptions_modelMutation:(unsigned long long)a0;
- (void)setRecordType_modelMutation:(id)a0;

@end
