@interface CMTimeAsValue : NSValue {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _time;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
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
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (id)initWithCoder:(id)a0;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)isEqualToValue:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeValue;

@end
