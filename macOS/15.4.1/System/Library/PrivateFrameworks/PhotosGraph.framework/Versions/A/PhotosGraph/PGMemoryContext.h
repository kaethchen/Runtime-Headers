@class NSTimeZone, NSIndexSet, PHPhotoLibrary, NSDate;

@interface PGMemoryContext : NSObject

@property (retain, nonatomic) NSDate *creationDateOfLastMemory;
@property (nonatomic) unsigned long long numberOfDaysSinceMemoryUpgrade;
@property (readonly, nonatomic) NSDate *localDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSIndexSet *categoriesDeniedForContextual;
@property (readonly, nonatomic) NSIndexSet *categoriesDeniedForFallback;
@property (readonly, nonatomic) BOOL futureLookup;

- (void).cxx_destruct;
- (void)initDeniedCategoriesWithPhotoLibrary:(id)a0;
- (id)initWithFutureLocalDate:(id)a0 timeZone:(id)a1 photoLibrary:(id)a2;
- (id)initWithLocalDate:(id)a0 timeZone:(id)a1 photoLibrary:(id)a2;
- (id)initWithMemoryPlanner:(id)a0 photoLibrary:(id)a1;

@end
