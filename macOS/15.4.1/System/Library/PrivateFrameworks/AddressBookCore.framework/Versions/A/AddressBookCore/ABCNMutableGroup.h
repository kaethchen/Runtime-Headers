@class NSString, ABCNGroup, ABCNGroupIdentifier;

@interface ABCNMutableGroup : ABCNGroup

@property (copy, nonatomic) ABCNGroup *snapshot;
@property (copy, nonatomic) ABCNGroupIdentifier *identifier;
@property (copy, nonatomic) NSString *name;

- (id)copy;
- (void)setName:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setSnapshot:(id)a0;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;

@end
