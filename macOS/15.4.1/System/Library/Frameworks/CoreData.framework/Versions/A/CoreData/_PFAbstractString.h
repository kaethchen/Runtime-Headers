@interface _PFAbstractString : NSString

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)fastestEncoding;
- (const char *)cString;
- (const unsigned short *)_fastCharacterContents;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (Class)classForCoder;
- (unsigned long long)smallestEncoding;

@end
