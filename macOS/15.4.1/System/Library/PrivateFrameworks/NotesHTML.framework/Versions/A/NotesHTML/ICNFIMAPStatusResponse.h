@class NSString, NSDictionary;

@interface ICNFIMAPStatusResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSString *mailboxName;
@property (copy, nonatomic) NSDictionary *statusEntries;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
