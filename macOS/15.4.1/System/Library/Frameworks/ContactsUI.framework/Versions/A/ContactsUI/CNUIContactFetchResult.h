@class CNContainer, NSArray, CNContact;

@interface CNUIContactFetchResult : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContainer *parentConrtainer;
@property (readonly, nonatomic) NSArray *linkedParentContainers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 linkedParentContainers:(id)a2;

@end
