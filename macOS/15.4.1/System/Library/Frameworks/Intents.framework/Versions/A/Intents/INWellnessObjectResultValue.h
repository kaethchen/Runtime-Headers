@class NSString, NSArray, INDateComponentsRange;

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INDateComponentsRange *recordDate;
@property (readonly, copy) NSString *unit;
@property (readonly, copy) NSArray *values;
@property (readonly) long long resultType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithRecordDate:(id)a0 unit:(id)a1 values:(id)a2 resultType:(long long)a3;

@end
