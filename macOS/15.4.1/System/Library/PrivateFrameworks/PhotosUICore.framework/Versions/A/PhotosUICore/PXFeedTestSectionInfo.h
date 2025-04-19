@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (void).cxx_destruct;
- (id)date;
- (BOOL)isLoaded;
- (long long)numberOfItems;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)a0;
- (id)photoLibrary;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
