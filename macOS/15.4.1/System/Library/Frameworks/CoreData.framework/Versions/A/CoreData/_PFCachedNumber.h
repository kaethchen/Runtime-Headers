@interface _PFCachedNumber : NSNumber

+ (id)new;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)copyWithZone:(struct _NSZone { } *)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)description;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (char)charValue;
- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;
- (BOOL)boolValue;
- (id)descriptionWithLocale:(id)a0;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
