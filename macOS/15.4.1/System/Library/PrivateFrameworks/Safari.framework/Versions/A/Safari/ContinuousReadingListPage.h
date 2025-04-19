@class ReadingListItem;

@interface ContinuousReadingListPage : ContinuousReadingListPageItem

@property (readonly, nonatomic) ReadingListItem *readingListItem;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)title;
- (id)icon;
- (id)urlString;
- (id)itemDescription;
- (BOOL)hasDefaultSiteIcon;
- (id)initWithReadingListItem:(id)a0;
- (id)representedReadingListItem;
- (id)secondaryIcon;

@end
