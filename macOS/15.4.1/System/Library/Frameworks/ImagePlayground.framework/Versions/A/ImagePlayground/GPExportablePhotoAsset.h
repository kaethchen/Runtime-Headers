@class NSString, NSImage, NSSecurityScopedURLWrapper, NSDate, GPGenerationRecipeData;

@interface GPExportablePhotoAsset : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ _imageURLWrapper;
    void /* unknown type, empty encoding */ _previewImage;
    void /* unknown type, empty encoding */ _creationDate;
    void /* unknown type, empty encoding */ _recipeData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id _identifier;
@property (nonatomic, readonly) NSSecurityScopedURLWrapper *imageURLWrapper;
@property (nonatomic, readonly) id _imageURLWrapper;
@property (nonatomic, readonly) NSImage *previewImage;
@property (nonatomic, readonly) id _previewImage;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pixelWidth;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pixelHeight;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) id _creationDate;
@property (nonatomic, readonly) GPGenerationRecipeData *recipeData;
@property (nonatomic, readonly) id _recipeData;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 imageURLWrapper:(id)a1 previewImage:(id)a2 pixelWidth:(id)a3 pixelHeight:(id)a4 creationDate:(id)a5 recipeData:(id)a6;

@end
