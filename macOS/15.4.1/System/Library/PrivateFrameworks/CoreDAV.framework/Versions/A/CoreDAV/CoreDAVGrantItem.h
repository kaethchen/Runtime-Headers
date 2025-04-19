@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (void)addPrivilege:(id)a0;

@end
