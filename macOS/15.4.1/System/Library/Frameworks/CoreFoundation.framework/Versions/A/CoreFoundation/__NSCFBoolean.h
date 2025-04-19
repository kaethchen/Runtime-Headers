@interface __NSCFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_isDeallocating;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
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
- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (unsigned char)_getValue:(void *)a0 forType:(long long)a1;
- (long long)_reverseCompare:(id)a0;
- (BOOL)boolValue;
- (long long)compare:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)getValue:(void *)a0;
- (long long)integerValue;
- (BOOL)isEqualToNumber:(id)a0;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;

@end
