@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) BOOL content;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) NSMutableSet *calendarChanges;

- (id)init;
- (void).cxx_destruct;
- (void)addContentItem:(id)a0;
- (void)addCalendarChange:(id)a0;
- (id)copyParseRules;

@end
