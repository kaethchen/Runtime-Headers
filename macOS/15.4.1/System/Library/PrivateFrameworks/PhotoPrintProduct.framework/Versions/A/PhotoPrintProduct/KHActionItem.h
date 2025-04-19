@class NSString;

@interface KHActionItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id /* block */ actionHandler;

+ (id)itemWithTitle:(id)a0 actionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)invoke:(id)a0;
- (id)initWithTitle:(id)a0 actionHandler:(id /* block */)a1;

@end
