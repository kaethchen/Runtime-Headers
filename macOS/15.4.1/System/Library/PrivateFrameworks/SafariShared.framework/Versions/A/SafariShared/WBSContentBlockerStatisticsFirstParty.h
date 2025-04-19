@class NSString;

@interface WBSContentBlockerStatisticsFirstParty : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) double lastSeen;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 lastSeen:(double)a1;

@end
