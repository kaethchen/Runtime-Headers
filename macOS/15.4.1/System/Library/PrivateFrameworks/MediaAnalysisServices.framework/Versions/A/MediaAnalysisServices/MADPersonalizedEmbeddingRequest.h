@class NSArray, VUWGalleryPersonalizationOptions;

@interface MADPersonalizedEmbeddingRequest : MADMultiModalRequest

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetBounds;
@property (retain, nonatomic) VUWGalleryPersonalizationOptions *personalizationOptions;
@property (nonatomic) long long type;
@property (nonatomic) long long revision;
@property (nonatomic) BOOL bypassFaceDetection;
@property (readonly, nonatomic) NSArray *embeddingResults;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
