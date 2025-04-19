@class NSString, NSDictionary;

@interface AMSMediaArtwork : NSObject

@property (class, nonatomic, readonly) NSString *cropStylePlaceholder;
@property (class, nonatomic, readonly) NSString *formatPlaceholder;
@property (class, nonatomic, readonly) NSString *heightPlaceholder;
@property (class, nonatomic, readonly) NSString *qualityPlaceholder;
@property (class, nonatomic, readonly) NSString *widthPlaceholder;

@property (readonly) NSDictionary *artworkDictionary;
@property (readonly) struct CGSize { double x0; double x1; } artworkSize;

+ (id)urlWithURLTemplate:(id)a0 size:(struct CGSize { double x0; double x1; })a1 cropStyle:(id)a2 format:(id)a3 quality:(id)a4;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (double)height;
- (double)width;
- (id)URLString;
- (id)URLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2;
- (id)URLWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)URLWithSize:(struct CGSize { double x0; double x1; })a0 cropStyle:(id)a1 format:(id)a2 quality:(unsigned long long)a3;
- (unsigned long long)_qualityForFormat:(id)a0;
- (struct CGColor { } *)colorWithKind:(id)a0;

@end
