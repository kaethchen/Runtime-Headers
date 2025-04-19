@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addPrincipalSearchProperty:(id)a0;

@end
