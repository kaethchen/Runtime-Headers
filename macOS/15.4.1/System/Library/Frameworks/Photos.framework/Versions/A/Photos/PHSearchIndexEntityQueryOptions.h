@class PHPhotoLibrary, NSIndexSet, PSIDatabase;

@interface PHSearchIndexEntityQueryOptions : NSObject

@property (retain, nonatomic) PSIDatabase *psiDatabaseForUnitTests;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long matchOptions;
@property (retain, nonatomic) NSIndexSet *categories;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)psiDatabase;

@end
