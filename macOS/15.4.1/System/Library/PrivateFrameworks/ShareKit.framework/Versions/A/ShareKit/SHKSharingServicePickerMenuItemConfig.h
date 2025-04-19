@class NSView;

@interface SHKSharingServicePickerMenuItemConfig : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, weak, nonatomic) NSView *view;
@property (readonly, nonatomic) unsigned long long preferredEdge;

- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1 preferredEdge:(unsigned long long)a2;

@end
