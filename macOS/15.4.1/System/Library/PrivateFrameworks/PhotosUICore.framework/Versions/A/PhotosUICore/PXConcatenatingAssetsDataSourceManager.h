@interface PXConcatenatingAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver> {
    void /* unknown type, empty encoding */ dataSourceManagers;
}

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInitialDataSource;
- (id)initWithDataSourceManagers:(id)a0;

@end
