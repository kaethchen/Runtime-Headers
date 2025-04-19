@class NSArray;

@interface IMAPSearchResponse : IMAPResponse

@property (copy, nonatomic) NSArray *searchResults;

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
