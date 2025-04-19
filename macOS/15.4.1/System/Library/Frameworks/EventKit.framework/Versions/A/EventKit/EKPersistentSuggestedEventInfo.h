@class NSString, NSDate, EKPersistentEvent;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) EKPersistentEvent *owner;
@property (copy, nonatomic) NSString *opaqueKey;
@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;

+ (id)relations;
+ (Class)meltedClass;
+ (id)suggestedEventInfoWithOpaqueKey:(id)a0 uniqueKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOwner:(id)a0;
- (id)owner;
- (id)opaqueKey;
- (unsigned long long)changedFields;
- (int)entityType;
- (id)uniqueKey;
- (id)timestampAsDate;
- (BOOL)changesAcknowledged;
- (id)extractionGroupIdentifier;
- (id)semanticIdentifier;
- (void)setChangedFields:(unsigned long long)a0;
- (void)setChangesAcknowledged:(BOOL)a0;
- (void)setExtractionGroupIdentifier:(id)a0;
- (void)setOpaqueKey:(id)a0;
- (void)setTimestampAsDate:(id)a0;
- (void)setUniqueKey:(id)a0;

@end
