@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addTransport:(id)a0;

@end
