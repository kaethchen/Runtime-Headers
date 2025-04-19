@interface PXMockCuratedLibraryAnalysisStatus : PXCuratedLibraryAnalysisStatus

@property (class, readonly, nonatomic) BOOL shouldUseMock;

+ (id)_mockStatus;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDataSourceManager:(id)a0;
- (void)_updateStatusProperties;
- (void)alternateTitleIndexDidChange;
- (void)dataSourceManagerDidChange;

@end
