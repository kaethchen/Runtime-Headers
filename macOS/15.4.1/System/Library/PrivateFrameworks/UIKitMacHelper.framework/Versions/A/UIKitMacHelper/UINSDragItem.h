@class NSItemProvider;

@interface UINSDragItem : NSObject <UINSDragItem>

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) long long preferredPresentationStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 preferredPresentationStyle:(long long)a2;

@end
