@class NSArray, CNGroup;

@interface WFCNContactGroup : WFContactGroup

@property (retain, nonatomic) NSArray *cachedMembers;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) CNGroup *group;

+ (id)allContactGroups;
+ (id)contactGroupWithCNGroup:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (BOOL)containsContact:(id)a0;
- (id)initWithCNGroup:(id)a0;

@end
