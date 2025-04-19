@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (copy, nonatomic) NSString *opaqueKey;
@property (copy, nonatomic) NSString *uniqueKey;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;
@property (nonatomic) BOOL changesAcknowledged;
@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) double timestamp;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownSingleValueKeysForComparison;

- (id)description;
- (id)initWithEventStore:(id)a0 opaqueKey:(id)a1 uniqueKey:(id)a2 extractionGroupIdentifier:(id)a3;
- (id)timestampAsDate;
- (id)initWithEventStore:(id)a0 opaqueKey:(id)a1 uniqueKey:(id)a2;
- (id)initWithOpaqueKey:(id)a0 uniqueKey:(id)a1;
- (id)initWithOpaqueKey:(id)a0 uniqueKey:(id)a1 extractionGroupIdentifier:(id)a2;
- (id)relatedEvent;
- (id)semanticIdentifier;
- (void)setTimestampAsDate:(id)a0;

@end
