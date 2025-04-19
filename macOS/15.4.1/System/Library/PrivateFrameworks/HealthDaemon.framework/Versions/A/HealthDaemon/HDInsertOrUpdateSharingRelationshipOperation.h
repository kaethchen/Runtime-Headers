@class NSArray;

@interface HDInsertOrUpdateSharingRelationshipOperation : HDJournalableOperation {
    NSArray *_relationships;
    long long _syncProvenance;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCodableSharingRelationships:(id)a0 syncProvenance:(long long)a1;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
