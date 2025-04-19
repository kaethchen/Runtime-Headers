@class NSFont;

@interface WBSCachedFont : NSObject

@property (retain, nonatomic) NSFont *font;
@property (nonatomic) double size;
@property (nonatomic) long long fontWeight;
@property (nonatomic) long long fontDesign;

- (void).cxx_destruct;

@end
