@class NSMenu, NSString, NSArray;

@interface WFMenu : NSObject

@property (readonly, nonatomic) NSMenu *platformMenu;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *elements;

+ (id)nsMenuItemsForWFMenuElements:(id)a0 forceShowState:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithElements:(id)a0;
- (BOOL)popUpMenuAtLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (id)initWithTitle:(id)a0 elements:(id)a1;

@end
