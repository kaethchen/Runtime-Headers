@class NSArray;

@interface ADImageSupportedSize : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned long long layout;
@property (readonly, retain, nonatomic) NSArray *customStrides;

+ (id)createWithSize:(struct CGSize { double x0; double x1; })a0 andLayout:(unsigned long long)a1;
+ (id)createWithSize:(struct CGSize { double x0; double x1; })a0 layout:(unsigned long long)a1 customStrides:(id)a2;

- (void).cxx_destruct;

@end
