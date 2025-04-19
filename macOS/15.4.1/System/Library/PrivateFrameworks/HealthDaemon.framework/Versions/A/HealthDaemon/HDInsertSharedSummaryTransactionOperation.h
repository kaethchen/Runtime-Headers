@class HDCloudSyncZoneIdentifier;

@interface HDInsertSharedSummaryTransactionOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneIdentifier:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
