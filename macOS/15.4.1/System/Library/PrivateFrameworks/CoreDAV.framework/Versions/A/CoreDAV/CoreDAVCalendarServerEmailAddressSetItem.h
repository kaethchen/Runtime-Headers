@class CoreDAVItemWithNoChildren, NSMutableArray;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addEmailAddress:(id)a0;

@end
