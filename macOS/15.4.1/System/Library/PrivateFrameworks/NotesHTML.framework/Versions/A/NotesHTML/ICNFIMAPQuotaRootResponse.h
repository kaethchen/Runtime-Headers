@class NSString, NSArray;

@interface ICNFIMAPQuotaRootResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSString *mailboxName;
@property (copy, nonatomic) NSArray *quotaRootNames;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
