@interface IMAPNoResponse : IMAPBasicResponse

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (const char *)_responseName;
- (BOOL)descriptionIncludesUserString;

@end
