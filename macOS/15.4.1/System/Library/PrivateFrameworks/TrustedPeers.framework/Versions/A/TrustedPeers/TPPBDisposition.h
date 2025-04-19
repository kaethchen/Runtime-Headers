@class TPPBUnknownMachineID, TPPBAncientEpoch, TPPBDispositionEvictedMachineID, TPPBDispositionDuplicateMachineID, TPPBPolicyProhibits, TPPBDispositionDisallowedMachineID, TPPBDispositionUnknownReasonRemovalMachineID, TPPBDispositionGhostedMachineID;

@interface TPPBDisposition : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAncientEpoch;
@property (retain, nonatomic) TPPBAncientEpoch *ancientEpoch;
@property (readonly, nonatomic) BOOL hasPolicyProhibits;
@property (retain, nonatomic) TPPBPolicyProhibits *policyProhibits;
@property (readonly, nonatomic) BOOL hasUnknownMachineID;
@property (retain, nonatomic) TPPBUnknownMachineID *unknownMachineID;
@property (readonly, nonatomic) BOOL hasDuplicateMachineID;
@property (retain, nonatomic) TPPBDispositionDuplicateMachineID *duplicateMachineID;
@property (readonly, nonatomic) BOOL hasDisallowedMachineID;
@property (retain, nonatomic) TPPBDispositionDisallowedMachineID *disallowedMachineID;
@property (readonly, nonatomic) BOOL hasEvictedMachineID;
@property (retain, nonatomic) TPPBDispositionEvictedMachineID *evictedMachineID;
@property (readonly, nonatomic) BOOL hasUnknownReasonRemovalMachineID;
@property (retain, nonatomic) TPPBDispositionUnknownReasonRemovalMachineID *unknownReasonRemovalMachineID;
@property (readonly, nonatomic) BOOL hasGhostedMachineID;
@property (retain, nonatomic) TPPBDispositionGhostedMachineID *ghostedMachineID;

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

@end
