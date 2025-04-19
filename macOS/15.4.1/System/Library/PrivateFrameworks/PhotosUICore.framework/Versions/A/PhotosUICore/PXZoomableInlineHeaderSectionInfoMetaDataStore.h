@class PXAssetsDataSource;

@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {
    struct *_sectionInfosByLevel[2];
    long long _sectionsCountByLevel[2];
    long long _sectionsCapacityByLevel[2];
}

@property (readonly, nonatomic) PXAssetsDataSource *dataSource;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)_resizeStorageIfNeededForNumberOfSections:(long long)a0 level:(unsigned long long)a1;
- (void)addSectionInfo:(struct { long long x0; long long x1; long long x2; double x3; })a0 forLevel:(unsigned long long)a1;
- (long long)numberOfSectionInfosForLevel:(unsigned long long)a0;
- (void)resetSectionInfos;
- (const struct { long long x0; long long x1; long long x2; double x3; } *)sectionInfosForLevel:(unsigned long long)a0;
- (BOOL)updateWithDataSourceAfterChanges:(id)a0 changeDetails:(id)a1;

@end
