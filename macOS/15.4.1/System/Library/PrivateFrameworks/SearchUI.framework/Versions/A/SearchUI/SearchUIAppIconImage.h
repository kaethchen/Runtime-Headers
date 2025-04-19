@class NSString;

@interface SearchUIAppIconImage : SearchUIImage

@property (nonatomic) unsigned long long variant;
@property (retain) NSString *bundleIdentifier;

+ (struct CGSize { double x0; double x1; })sizeForVariant:(unsigned long long)a0;
+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1 contentType:(id)a2;
+ (id)appIconForResult:(id)a0 variant:(unsigned long long)a1;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)imageForIcon:(id)a0 descriptor:(id)a1;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (int)defaultCornerRoundingStyle;
- (id)descriptorWithScale:(double)a0;
- (id)initWithBundleIdentifier:(id)a0 variant:(unsigned long long)a1 contentType:(id)a2;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;

@end
