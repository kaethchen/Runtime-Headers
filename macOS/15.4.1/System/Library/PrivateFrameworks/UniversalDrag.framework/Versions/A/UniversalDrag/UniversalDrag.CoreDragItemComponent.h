@class NSString;

@interface UniversalDrag.CoreDragItemComponent : NSObject {
    void /* unknown type, empty encoding */ key;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ image;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ frame;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 image:(struct CGImage { } *)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
