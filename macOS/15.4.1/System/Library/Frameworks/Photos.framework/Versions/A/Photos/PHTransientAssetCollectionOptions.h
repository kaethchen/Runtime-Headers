@class PHFetchResult, NSString, PHQuery, PHPhotoLibrary, NSDate;

@interface PHTransientAssetCollectionOptions : NSObject

@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) PHQuery *query;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *titleFontName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long keyAssetsPosition;
@property (retain, nonatomic) Class assetCollectionClass;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithAssetFetchResult:(id)a0;
- (id)initWithFetchOptions:(id)a0;

@end
