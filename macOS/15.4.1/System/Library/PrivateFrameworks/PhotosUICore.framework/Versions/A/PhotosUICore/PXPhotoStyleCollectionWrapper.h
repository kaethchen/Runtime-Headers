@class PXPhotoStyleCollection;

@interface PXPhotoStyleCollectionWrapper : NSObject {
    PXPhotoStyleCollection *_underlyingCollection;
}

+ (id)macStyleCollections;

- (id)name;
- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (id)styleElements;

@end
