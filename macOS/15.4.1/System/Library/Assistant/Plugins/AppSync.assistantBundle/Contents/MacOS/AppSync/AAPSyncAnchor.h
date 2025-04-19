@class NSString;

@interface AAPSyncAnchor : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _mainIndex;
    unsigned long long _subIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)anchorFromStringRepresentation:(id)a0;
+ (id)anchorFromStringRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)isValidStringRepresentation:(id)a0 withMainIndex:(unsigned long long *)a1 subIndex:(unsigned long long *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)primitiveAnchor;
- (id)_initWithMainIndex:(unsigned long long)a0 subIndex:(unsigned long long)a1;
- (id)anchorByIncrementingSubIndex;
- (BOOL)isEqualToAnchor:(id)a0;
- (BOOL)isNewerThanAnchor:(id)a0;
- (BOOL)isOlderThanAnchor:(id)a0;
- (BOOL)isPrimitiveAnchor;

@end
