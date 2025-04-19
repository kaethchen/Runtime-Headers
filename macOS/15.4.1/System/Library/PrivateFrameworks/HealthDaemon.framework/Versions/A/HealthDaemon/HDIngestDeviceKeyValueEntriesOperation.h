@class NSString, HDAssertion;

@interface HDIngestDeviceKeyValueEntriesOperation : HDJournalableOperation {
    HDAssertion *_assertion;
    NSString *_containerIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessibilityAssertion:(id)a0 containerIdentifier:(id)a1;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)transactionContext;

@end
