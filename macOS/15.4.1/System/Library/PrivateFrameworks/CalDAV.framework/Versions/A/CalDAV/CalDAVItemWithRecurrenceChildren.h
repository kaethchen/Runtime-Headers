@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *recurrences;

- (void).cxx_destruct;
- (void)addRecurrence:(id)a0;
- (id)copyParseRules;

@end
