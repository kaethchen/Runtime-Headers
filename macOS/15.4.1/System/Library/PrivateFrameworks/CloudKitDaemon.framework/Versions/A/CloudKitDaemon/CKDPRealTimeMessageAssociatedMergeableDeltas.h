@class CKDPRecordIdentifier, CKDPRecordFieldIdentifier, NSMutableArray, CKDPMergeableValueIdentifier;

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasFieldIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *mergeableDeltas;

+ (Class)mergeableDeltasType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addMergeableDeltas:(id)a0;
- (void)clearMergeableDeltas;
- (id)mergeableDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)mergeableDeltasCount;

@end
