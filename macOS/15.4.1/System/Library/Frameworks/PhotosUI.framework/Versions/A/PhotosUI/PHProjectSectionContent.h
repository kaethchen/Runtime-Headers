@class NSArray, NSColor;

@interface PHProjectSectionContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *elements;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSArray *cloudAssetIdentifiers;
@property (readonly, nonatomic) NSColor *backgroundColor;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(BOOL)a0;
- (id)initWithElements:(id)a0 numberOfColumns:(long long)a1 aspectRatio:(double)a2 assetIdentifiers:(id)a3;
- (id)initWithElements:(id)a0 numberOfColumns:(long long)a1 aspectRatio:(double)a2 assetIdentifiers:(id)a3 backgroundColor:(id)a4;

@end
