@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *incompleteReminderCounts;
@property (readonly, nonatomic) long long scheduledCount;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIncompleteReminderCounts:(id)a0 scheduledCount:(long long)a1;

@end
