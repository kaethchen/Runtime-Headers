@interface _AXFDiscontinuousArrayItem : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) id object;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
