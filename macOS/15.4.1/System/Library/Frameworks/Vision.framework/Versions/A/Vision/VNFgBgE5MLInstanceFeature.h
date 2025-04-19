@class NSString;

@interface VNFgBgE5MLInstanceFeature : NSObject

@property int queryID;
@property float miyoshiConfidence;
@property float cocoConfidence;
@property float IoU;
@property float stabilityScore;
@property int miyoshiCategory;
@property int cocoCategory;
@property (retain) NSString *miyoshiCategoryName;
@property (retain) NSString *cocoCategoryName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bbox;
@property struct CGSize { double width; double height; } mapSize;
@property struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } segmentation;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithQueryID:(int)a0 miyoshiConfidence:(float)a1 cocoConfidence:(float)a2 IoU:(float)a3 stabilityScore:(float)a4 miyoshiCategory:(int)a5 cocoCategory:(int)a6 miyoshiCategoryName:(id)a7 cocoCategoryName:(id)a8 bbox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 mapSize:(struct CGSize { double x0; double x1; })a10 segmentation:(struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })a11;

@end
