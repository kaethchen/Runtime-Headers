@class NSArray;

@interface UXItemSectionList : NSObject

@property (retain, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (id)sectionTitles;
- (unsigned long long)numRows;
- (unsigned long long)numItems;
- (unsigned long long)numSections;

@end
