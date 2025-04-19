@class NSMutableArray;

@interface PHASERandomNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *subtrees;
@property (nonatomic) long long noRepeatLastX;
@property (nonatomic) long long uniqueSelectionQueueLength;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)children;
- (id)initWithUID:(id)a0;
- (void)addSubtree:(id)a0 weight:(id)a1;
- (long long)noRepeatLastX;
- (void)setNoRepeatLastX:(long long)a0;

@end
