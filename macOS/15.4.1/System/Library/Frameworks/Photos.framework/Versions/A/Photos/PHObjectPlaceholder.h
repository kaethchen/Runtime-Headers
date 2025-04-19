@class NSString, PHPhotoLibrary;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
    PHPhotoLibrary *_photoLibrary;
}

@property long long assetMediaType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)localIdentifier;
- (id)photoLibrary;
- (id)initWithLocalIdentifier:(id)a0;

@end
