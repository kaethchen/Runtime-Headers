@interface PXSRowAction : NSObject

@property (copy, nonatomic) id /* block */ handler;

+ (id)action;
+ (id)actionWithHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
