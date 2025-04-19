@class NSDictionary;

@interface IMAPIDResponse : IMAPResponse

@property (copy, nonatomic) NSDictionary *serverID;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
