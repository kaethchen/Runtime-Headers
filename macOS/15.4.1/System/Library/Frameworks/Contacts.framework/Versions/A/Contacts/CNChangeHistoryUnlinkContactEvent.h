@class CNContact;

@interface CNChangeHistoryUnlinkContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *contact;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (id)initWithContact:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
