@class NSString, MCQuotaUsage;

@interface IMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) MCQuotaUsage *usage;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)setUsageFromResponse:(id)a0;

@end
