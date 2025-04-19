@class NSURL, TabSearchTabInfoForFiltering;

@interface TabSearchTabItem : TabSearchItem

@property (retain, nonatomic) NSURL *tabURL;
@property (retain, nonatomic) TabSearchTabInfoForFiltering *filteringInfoForTab;

- (void).cxx_destruct;

@end
