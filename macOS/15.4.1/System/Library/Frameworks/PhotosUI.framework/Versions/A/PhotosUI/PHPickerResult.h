@class _PHPickerResultMetadata, NSString, NSItemProvider;

@interface PHPickerResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _isAssetResult;
@property (readonly, copy, nonatomic) _PHPickerResultMetadata *_metadata;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSString *assetIdentifier;

+ (BOOL)_validateBestCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_filePromiseURLForTypeIdentifier:(id)a0;
- (id)_initWithItemProvider:(id)a0 itemIdentifier:(id)a1;
- (id)_initWithItemProvider:(id)a0 itemIdentifier:(id)a1 isAssetResult:(BOOL)a2 metadata:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredContentsRectForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)_requestThumbnailImageURLForPreferredSize:(long long)a0 resultHandler:(id /* block */)a1;

@end
