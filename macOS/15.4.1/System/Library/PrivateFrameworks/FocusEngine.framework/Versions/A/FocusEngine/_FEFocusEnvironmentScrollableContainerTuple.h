@protocol _FEFocusItemScrollableContainer, _FEFocusEnvironment;

@interface _FEFocusEnvironmentScrollableContainerTuple : NSObject

@property (readonly, nonatomic) id<_FEFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<_FEFocusItemScrollableContainer> scrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)a0 scrollableContainer:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOwningEnvironment:(id)a0 scrollableContainer:(id)a1;

@end
