@class NSString;

@interface IMAPEnabledResponse : IMAPResponse

@property (copy, nonatomic) NSString *capability;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
