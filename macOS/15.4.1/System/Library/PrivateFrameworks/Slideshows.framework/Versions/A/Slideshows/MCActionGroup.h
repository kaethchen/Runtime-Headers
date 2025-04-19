@class NSMutableArray;

@interface MCActionGroup : MCAction

@property (readonly, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) unsigned long long countOfActions;

+ (id)actionGroup;

- (id)description;
- (id)init;
- (void)removeAllActions;
- (void)addAction:(id)a0;
- (id)xmlElement;
- (void)addActions:(id)a0;
- (id)imprint;
- (id)actionAtIndex:(unsigned long long)a0;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;
- (void)insertAction:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertActions:(id)a0 atIndex:(unsigned long long)a1;
- (void)moveActionsAtIndices:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeActionsAtIndices:(id)a0;

@end
