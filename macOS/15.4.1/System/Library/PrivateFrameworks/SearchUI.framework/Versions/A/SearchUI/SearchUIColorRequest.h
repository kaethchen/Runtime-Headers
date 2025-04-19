@class SFColor, TLKAppearance;

@interface SearchUIColorRequest : NSObject

@property (retain, nonatomic) SFColor *sfColor;
@property (retain, nonatomic) TLKAppearance *appearance;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToColorRequest:(id)a0;

@end
