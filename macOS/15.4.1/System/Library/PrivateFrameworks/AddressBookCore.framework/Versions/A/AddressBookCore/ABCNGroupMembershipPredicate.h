@class ABCNGroupIdentifier;

@interface ABCNGroupMembershipPredicate : ABCNPredicate

@property (readonly, copy) ABCNGroupIdentifier *groupIdentifier;

- (void)dealloc;
- (id)cn_coreDataPredicate;
- (id)initWithGroupIdentifier:(id)a0;

@end
