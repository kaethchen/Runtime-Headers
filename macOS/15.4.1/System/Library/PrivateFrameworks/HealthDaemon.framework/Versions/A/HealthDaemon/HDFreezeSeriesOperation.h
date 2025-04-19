@class NSUUID, NSDictionary;

@interface HDFreezeSeriesOperation : HDJournalableOperation {
    NSUUID *_identifier;
    NSDictionary *_metadata;
    Class _entityClass;
    NSUUID *_frozenIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
