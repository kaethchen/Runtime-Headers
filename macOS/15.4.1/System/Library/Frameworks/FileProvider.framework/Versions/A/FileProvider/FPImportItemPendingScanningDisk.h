@class NSString, NSFileProviderDiagnosticAttributesDescriptor;

@interface FPImportItemPendingScanningDisk : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic) long long itemPendingScanningDiskEnumerationStatus;
@property (nonatomic) BOOL itemPendingScanningDiskHasMultiplePagesEnumeration;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingReconciliation;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenNotPendingReconciliation;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUpDeletion;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDownDeletion;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUpReparent;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncUp;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDownReparent;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingSyncDown;
@property (nonatomic) long long itemPendingScanningDiskNumberOfChildrenPendingRejection;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;

@end
