@protocol NSDecimalNumberBehaviors;

@interface NSDecimalNumber : NSNumber {
    unsigned char _exponent : 8;
    unsigned char _length : 4;
    unsigned char _isNegative : 1;
    unsigned char _isCompact : 1;
    unsigned char _reserved : 1;
    unsigned char _hasExternalRefCount : 1;
    unsigned short _refs : 16;
    unsigned short *_mantissa;
}

@property (class, readonly, copy) NSDecimalNumber *zero;
@property (class, readonly, copy) NSDecimalNumber *one;
@property (class, readonly, copy) NSDecimalNumber *minimumDecimalNumber;
@property (class, readonly, copy) NSDecimalNumber *maximumDecimalNumber;
@property (class, readonly, copy) NSDecimalNumber *notANumber;
@property (class, retain) id<NSDecimalNumberBehaviors> defaultBehavior;

@property (readonly) struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } decimalValue;
@property (readonly) const char *objCType;
@property (readonly) double doubleValue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)numberWithBool:(BOOL)a0;
+ (id)numberWithDouble:(double)a0;
+ (id)numberWithLongLong:(long long)a0;
+ (id)numberWithUnsignedChar:(unsigned char)a0;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithLong:(long long)a0;
+ (id)numberWithInt:(int)a0;
+ (id)numberWithUnsignedInt:(unsigned int)a0;
+ (id)numberWithUnsignedInteger:(unsigned long long)a0;
+ (id)numberWithUnsignedLong:(unsigned long long)a0;
+ (id)numberWithUnsignedLongLong:(unsigned long long)a0;
+ (id)numberWithFloat:(float)a0;
+ (id)numberWithInteger:(long long)a0;
+ (id)numberWithShort:(short)a0;
+ (id)decimalNumberWithString:(id)a0 locale:(id)a1;
+ (id)numberWithChar:(char)a0;
+ (id)decimalNumberWithDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a0;
+ (id)decimalNumberWithMantissa:(unsigned long long)a0 exponent:(short)a1 isNegative:(BOOL)a2;
+ (id)decimalNumberWithString:(id)a0;
+ (id)numberWithUnsignedShort:(unsigned short)a0;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (char)charValue;
- (float)floatValue;
- (int)intValue;
- (long long)longLongValue;
- (long long)longValue;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;
- (id)initWithString:(id)a0;
- (BOOL)_getCString:(char *)a0 length:(int)a1 multiplier:(double)a2;
- (BOOL)boolValue;
- (Class)classForCoder;
- (long long)compare:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (id)decimalNumberByAdding:(id)a0;
- (id)decimalNumberByAdding:(id)a0 withBehavior:(id)a1;
- (id)decimalNumberByDividingBy:(id)a0;
- (id)decimalNumberByDividingBy:(id)a0 withBehavior:(id)a1;
- (id)decimalNumberByMultiplyingBy:(id)a0;
- (id)decimalNumberByMultiplyingBy:(id)a0 withBehavior:(id)a1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a0;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)a0 withBehavior:(id)a1;
- (id)decimalNumberByRaisingToPower:(unsigned long long)a0;
- (id)decimalNumberByRaisingToPower:(unsigned long long)a0 withBehavior:(id)a1;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)a0;
- (id)decimalNumberBySubstracting:(id)a0;
- (id)decimalNumberBySubstracting:(id)a0 withBehavior:(id)a1;
- (id)decimalNumberBySubtracting:(id)a0;
- (id)decimalNumberBySubtracting:(id)a0 withBehavior:(id)a1;
- (id)initWithDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; })a0;
- (id)initWithMantissa:(unsigned long long)a0 exponent:(short)a1 isNegative:(BOOL)a2;
- (id)initWithString:(id)a0 locale:(id)a1;

@end
