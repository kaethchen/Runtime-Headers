@class ABActionAutovalidatorCache;

@interface ABActionAutovalidator : NSObject

@property (weak, nonatomic) id target;
@property (retain, nonatomic) ABActionAutovalidatorCache *cache;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (BOOL)validateAction:(SEL)a0;
- (BOOL)validateMenuItem:(id)a0;
- (id)initWithTarget:(id)a0 cache:(id)a1;
- (BOOL)isAlwaysValid:(SEL)a0;
- (BOOL)isValidAction:(SEL)a0 withMenuItem:(id)a1;
- (SEL)selectorForMenuAction:(SEL)a0;
- (SEL)selectorForSimpleAction:(SEL)a0;
- (id)setEntryForAction:(SEL)a0;
- (BOOL)validateAction:(SEL)a0 withMenuItem:(id)a1;

@end
