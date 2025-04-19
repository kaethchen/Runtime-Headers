@interface AppTelemetryStuckStatus : PBCodable <NSCopying> {
    struct { unsigned char itemPendingReconciliationJobBlockingCode : 1; unsigned char itemPendingReconciliationJobCode : 1; unsigned char itemPendingReconciliationJobSchedulingState : 1; unsigned char itemPendingScanningDiskEnumerationStatus : 1; unsigned char itemPendingScanningDiskNumberOfChildrenNotPendingReconciliation : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingReconciliation : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingRejection : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncDown : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncUp : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion : 1; unsigned char itemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent : 1; unsigned char itemPendingScanningProviderEnumerationStatus : 1; unsigned char itemPendingScanningProviderNumberOfChildren : 1; unsigned char itemPendingScanningProviderNumberOfChildrenFailingCreation : 1; unsigned char itemPendingScanningProviderNumberOfChildrenPendingCreation : 1; unsigned char itemPendingScanningProviderRemovalOfDatalessBitStatus : 1; unsigned char itemPendingReconciliationIsLocked : 1; unsigned char itemPendingReconciliationIsLockedInDB : 1; unsigned char itemPendingScanningDiskHasMultiplePagesEnumeration : 1; unsigned char itemPendingScanningProviderHasMultiplePagesEnumeration : 1; } _has;
}

@property (nonatomic) BOOL hasItemPendingReconciliationIsLocked;
@property (nonatomic) BOOL itemPendingReconciliationIsLocked;
@property (nonatomic) BOOL hasItemPendingReconciliationIsLockedInDB;
@property (nonatomic) BOOL itemPendingReconciliationIsLockedInDB;
@property (nonatomic) BOOL hasItemPendingReconciliationJobCode;
@property (nonatomic) long long itemPendingReconciliationJobCode;
@property (nonatomic) BOOL hasItemPendingReconciliationJobSchedulingState;
@property (nonatomic) long long itemPendingReconciliationJobSchedulingState;
@property (nonatomic) BOOL hasItemPendingReconciliationJobBlockingCode;
@property (nonatomic) long long itemPendingReconciliationJobBlockingCode;
@property (nonatomic) BOOL hasItemPendingScanningDiskEnumerationStatus;
@property (nonatomic) long long itemPendingScanningDiskEnumerationStatus;
@property (nonatomic) BOOL hasItemPendingScanningDiskHasMultiplePagesEnumeration;
@property (nonatomic) BOOL itemPendingScanningDiskHasMultiplePagesEnumeration;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingReconciliation;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingReconciliation;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenNotPendingReconciliation;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenNotPendingReconciliation;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingSyncUp;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUp;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingSyncDown;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDown;
@property (nonatomic) BOOL hasItemPendingScanningDiskNumberOfChildrenPendingRejection;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingRejection;
@property (nonatomic) BOOL hasItemPendingScanningProviderEnumerationStatus;
@property (nonatomic) long long itemPendingScanningProviderEnumerationStatus;
@property (nonatomic) BOOL hasItemPendingScanningProviderHasMultiplePagesEnumeration;
@property (nonatomic) BOOL itemPendingScanningProviderHasMultiplePagesEnumeration;
@property (nonatomic) BOOL hasItemPendingScanningProviderNumberOfChildren;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildren;
@property (nonatomic) BOOL hasItemPendingScanningProviderNumberOfChildrenPendingCreation;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenPendingCreation;
@property (nonatomic) BOOL hasItemPendingScanningProviderNumberOfChildrenFailingCreation;
@property (nonatomic) long long itemPendingScanningProviderNumberOfChildrenFailingCreation;
@property (nonatomic) BOOL hasItemPendingScanningProviderRemovalOfDatalessBitStatus;
@property (nonatomic) long long itemPendingScanningProviderRemovalOfDatalessBitStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
