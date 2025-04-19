@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)regularExpression;
+ (BOOL)validateVersionString:(id)a0;
+ (BOOL)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)versionOne;
+ (id)versionWithPackedUInt32:(unsigned int)a0;
+ (id)versionWithString:(id)a0;
+ (id)versionZero;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqualToVersion:(id)a0;
- (BOOL)atLeastMajor:(long long)a0 minor:(long long)a1;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (BOOL)isCompatibleWithVersion:(id)a0;

@end
