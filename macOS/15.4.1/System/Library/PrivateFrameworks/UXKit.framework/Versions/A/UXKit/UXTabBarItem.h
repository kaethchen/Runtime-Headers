@class NSArray, NSSet;

@interface UXTabBarItem : UXBarItem

@property (copy, nonatomic) NSArray *representedSegments;
@property (copy, nonatomic) NSSet *possibleTitles;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
