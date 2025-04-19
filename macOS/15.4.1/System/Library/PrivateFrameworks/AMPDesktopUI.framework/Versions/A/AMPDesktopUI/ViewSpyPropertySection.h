@class NSString, NSMutableArray;

@interface ViewSpyPropertySection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *items;

+ (BOOL)supportsSecureCoding;
+ (id)newSection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addSeparator;
- (void)addItem:(id)a0 withBoolean:(BOOL)a1;
- (void)addItem:(id)a0 withColor:(id)a1;
- (void)addItem:(id)a0 withEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)addItem:(id)a0 withFloat:(double)a1;
- (void)addItem:(id)a0 withInteger:(long long)a1;
- (void)addItem:(id)a0 withIntrinsicSize:(struct CGSize { double x0; double x1; })a1;
- (void)addItem:(id)a0 withKey:(id)a1 fromObject:(id)a2;
- (void)addItem:(id)a0 withObject:(id)a1;
- (void)addItem:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addItem:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)addItem:(id)a0 withText:(id)a1;

@end
