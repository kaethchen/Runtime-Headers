@class HDDataDeletionConfiguration;
@protocol HKUUIDCollection;

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) id<HKUUIDCollection> UUIDCollection;
@property (readonly, copy, nonatomic) HDDataDeletionConfiguration *configuration;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 objectUUIDs:(id)a1;

@end
