@class AMPFilterableCategory;

@interface FilterCategoryMenuItem : NSMenuItem

@property (retain, nonatomic) AMPFilterableCategory *category;

- (void).cxx_destruct;
- (unsigned long long)catBitmask;

@end
