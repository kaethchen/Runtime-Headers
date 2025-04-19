@class NSString, NSArray;

@interface _ANEModelInstanceParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *instanceName;
@property (readonly, nonatomic) NSArray *procedureArray;

+ (id)new;
+ (id)withProcedureData:(id)a0 procedureArray:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcedureData:(id)a0 procedureArray:(id)a1;

@end
