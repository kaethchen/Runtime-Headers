@class CKDistributedTimestampStateVector, CKDistributedTimestampClockVector;

@interface CKMergeableDeltaVectors : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDistributedTimestampClockVector *previous;
@property (readonly, copy, nonatomic) CKDistributedTimestampStateVector *contents;
@property (readonly, copy, nonatomic) CKDistributedTimestampStateVector *removals;
@property (readonly, copy, nonatomic) CKDistributedTimestampClockVector *dependencies;

+ (BOOL)addToAttributedVector:(id)a0 fromPVersionVector:(id)a1 forSiteIdentifier:(id)a2 error:(id *)a3;
+ (id)deltaMetadataVectorsFromPDistributedTimestamps:(id)a0 error:(id *)a1;
+ (id)mergeableDeltaMetadataVectorsByCombiningVectors:(id)a0;
+ (id)pDistributedTimestampsFromDeltaMetadataVectors:(id)a0;
+ (id)pDistributedTimestampsWithPreviousVector:(id)a0 contentsVector:(id)a1 removalsVector:(id)a2 dependenciesVector:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_validate:(id *)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (id)initWithPreviousStateVector:(id)a0 currentStateVector:(id)a1;
- (id)initWithPreviousVector:(id)a0 contentsVector:(id)a1 removalsVector:(id)a2 dependenciesVector:(id)a3;
- (unsigned long long)protobufSize;

@end
