@class NSArray;

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry

@property (retain, nonatomic) NSArray *records;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long syncProvenance;
@property (nonatomic) long long syncIdentity;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
