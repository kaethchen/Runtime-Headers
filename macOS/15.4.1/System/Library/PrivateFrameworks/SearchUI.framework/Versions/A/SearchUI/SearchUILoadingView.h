@class NSProgressIndicator, TLKLabel;

@interface SearchUILoadingView : NUIContainerBoxView

@property (retain) NSProgressIndicator *loadingSpinner;
@property (retain) TLKLabel *loadingLabel;
@property (nonatomic) unsigned long long loadingState;

- (id)init;
- (void).cxx_destruct;

@end
