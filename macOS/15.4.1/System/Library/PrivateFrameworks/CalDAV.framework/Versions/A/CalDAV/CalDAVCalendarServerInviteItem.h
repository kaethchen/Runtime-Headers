@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *users;

- (id)init;
- (void).cxx_destruct;
- (void)addUser:(id)a0;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;

@end
