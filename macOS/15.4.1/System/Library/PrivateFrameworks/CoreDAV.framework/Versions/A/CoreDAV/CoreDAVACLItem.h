@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addACE:(id)a0;
- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)a0;

@end
