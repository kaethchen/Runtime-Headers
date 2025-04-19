@class NSString, ICNFMCQuotaUsage;

@interface ICNFIMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) ICNFMCQuotaUsage *usage;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)setUsageFromResponse:(id)a0;

@end
