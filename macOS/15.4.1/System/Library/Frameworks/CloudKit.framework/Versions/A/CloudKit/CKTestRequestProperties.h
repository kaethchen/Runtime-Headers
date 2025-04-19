@class NSArray, CKRoughlyEquivalentProperties;

@interface CKTestRequestProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (copy) NSArray *modifyRecordIDs;
@property (copy) NSArray *deleteRecordIDs;
@property (copy) NSArray *fetchRecordIDs;
@property (copy) NSArray *modifyRecordZoneIDs;
@property (copy) NSArray *deleteRecordZoneIDs;
@property (copy) NSArray *fetchRecordZoneIDs;
@property (copy) NSArray *modifyMergeableValueIDs;
@property (copy) NSArray *deleteMergeableValueIDs;
@property (copy) NSArray *fetchMergeableValueIDs;
@property (copy) NSArray *modifySubscriptionRecordZoneIDs;
@property long long databaseScope;
@property (readonly, nonatomic) NSArray *allRecordIDs;
@property (readonly, nonatomic) NSArray *allRecordZoneIDs;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEquivalencyProperties:(id)a0;

@end
