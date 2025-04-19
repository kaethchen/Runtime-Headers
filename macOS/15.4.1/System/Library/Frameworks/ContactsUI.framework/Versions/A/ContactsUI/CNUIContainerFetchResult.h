@class NSArray, CNContainer;

@interface CNUIContainerFetchResult : NSObject

@property (readonly, nonatomic) CNContainer *parentConrtainer;
@property (readonly, nonatomic) NSArray *linkedParentContainers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithParentContainer:(id)a0 linkedParentContainers:(id)a1;

@end
