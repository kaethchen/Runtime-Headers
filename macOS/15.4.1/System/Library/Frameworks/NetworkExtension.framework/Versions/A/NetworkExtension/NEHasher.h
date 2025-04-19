@class NSArray;

@interface NEHasher : NSCoder {
    struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } *_sha1Context;
    NSArray *_classPrefixWhitelist;
}

+ (id)hashObject:(id)a0;
+ (id)hashObject:(id)a0 withClassPrefixWhitelist:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (id)decodePropertyListForKey:(id)a0;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeDataObject;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (struct CGPoint { double x0; double x1; })decodePointForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRectForKey:(id)a0;
- (struct CGSize { double x0; double x1; })decodeSizeForKey:(id)a0;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)encodeDataObject:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (long long)versionForClassName:(id)a0;

@end
