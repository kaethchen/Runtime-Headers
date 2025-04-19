@protocol UINSMenu;

@interface UINSHostMenu : NSMenu

@property (weak, nonatomic) id<UINSMenu> proxyMenu;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithProxy:(id)a0;

@end
