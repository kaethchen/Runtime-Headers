@class FI_TBrowserViewDataSource;

@interface FI_TBVDSBusyStateIncrementer : NSObject {
    struct TNSWeakPtr<FI_TBrowserViewDataSource> { FI_TBrowserViewDataSource *fWeakObject; } _weakDataSource;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDataSource:(id)a0;
- (void)aboutToTearDown;

@end
