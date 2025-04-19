@class NSIndexSet;

@interface IMAPVanishedResponse : IMAPResponse

@property (nonatomic) BOOL earlier;
@property (copy, nonatomic) NSIndexSet *uids;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
