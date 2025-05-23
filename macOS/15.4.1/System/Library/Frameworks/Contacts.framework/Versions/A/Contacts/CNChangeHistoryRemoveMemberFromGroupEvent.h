@class CNGroup, CNContact;

@interface CNChangeHistoryRemoveMemberFromGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *member;
@property (readonly, nonatomic) CNGroup *group;

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
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithMember:(id)a0 group:(id)a1;

@end
