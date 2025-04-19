@class NSArray;

@interface GEOSearchResultPlacePhotos : NSObject {
    NSArray *_searchResultPlacePhotos;
}

@property (readonly, nonatomic) NSArray *photos;

- (void).cxx_destruct;
- (id)initWithSearchResultPlacePhotos:(id)a0;

@end
