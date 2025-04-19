@class NSString, NSSet, CKDistributedTimestampClockVector, CKMergeableDeltaVectors, CKDistributedTimestampStateVector;

@interface CKMergeableDeltaMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy) CKMergeableDeltaVectors *vectors;
@property (copy) NSSet *replacedDeltaIdentifiers;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, copy, nonatomic) CKDistributedTimestampClockVector *previousVector;
@property (readonly, copy, nonatomic) CKDistributedTimestampStateVector *contentsVector;
@property (readonly, copy, nonatomic) CKDistributedTimestampStateVector *removalsVector;
@property (readonly, copy, nonatomic) CKDistributedTimestampClockVector *dependenciesVector;

+ (id)deliverableDeltaMetadatasInDeltaSet:(id)a0 withMergeableValueCurrentStateVector:(id)a1 deliveryRequirements:(unsigned long long)a2;
+ (id)mergeableDeltaMetadataByCombiningMetadatas:(id)a0;
+ (id)replacementDeltaMetadatasForDeltaDirectory:(id)a0 withNextDeltaMetadata:(id)a1 currentStateVector:(id)a2 deltaDirectoryDeliveryRequirements:(unsigned long long)a3 error:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEquivalent:(id)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 vectors:(id)a1 replacedDeltaIdentifiers:(id)a2;
- (id)initWithVectors:(id)a0;

@end
