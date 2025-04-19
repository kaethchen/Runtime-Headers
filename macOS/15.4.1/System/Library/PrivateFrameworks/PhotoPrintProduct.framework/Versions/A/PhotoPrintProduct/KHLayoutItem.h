@class NSSet, NSValue;

@interface KHLayoutItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (retain, nonatomic) NSSet *layoutRects;
@property (nonatomic) long long state;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) NSValue *rectValue;
@property (readonly, nonatomic) unsigned long long type;

+ (id)layoutItemWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentType:(unsigned long long)a1;

- (id)debugDescription;
- (void).cxx_destruct;

@end
