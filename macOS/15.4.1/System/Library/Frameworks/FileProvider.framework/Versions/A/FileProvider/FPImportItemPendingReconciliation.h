@class NSString, NSFileProviderDiagnosticAttributesDescriptor;

@interface FPImportItemPendingReconciliation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSFileProviderDiagnosticAttributesDescriptor *diagnosticAttributes;
@property (nonatomic) BOOL itemPendingReconciliationIsLocked;
@property (nonatomic) BOOL itemPendingReconciliationIsLockedInDB;
@property (nonatomic) long long itemPendingReconciliationJobCode;
@property (nonatomic) long long itemPendingReconciliationJobSchedulingState;
@property (nonatomic) long long itemPendingReconciliationJobBlockingCode;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemIdentifier:(id)a0;
- (id)json;

@end
