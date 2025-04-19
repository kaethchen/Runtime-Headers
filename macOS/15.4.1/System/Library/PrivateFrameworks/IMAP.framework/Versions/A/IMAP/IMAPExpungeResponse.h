@interface IMAPExpungeResponse : IMAPNumericResponse

+ (BOOL)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (const char *)_responseName;

@end
