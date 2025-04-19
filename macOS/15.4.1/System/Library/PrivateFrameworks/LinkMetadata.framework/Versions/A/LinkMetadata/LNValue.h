@class LNValueType, LNDisplayRepresentation, LNExportedContent;

@interface LNValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNDisplayRepresentation *displayRepresentation;
@property (copy, nonatomic) LNExportedContent *exportedContent;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, copy, nonatomic) id value;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 valueType:(id)a1;
- (id)initWithValues:(id)a0 memberValueType:(id)a1;
- (id)initWithValue:(id)a0 valueType:(id)a1 displayRepresentation:(id)a2;
- (id)initWithValue:(id)a0 valueType:(id)a1 exportedContent:(id)a2 displayRepresentation:(id)a3;

@end
