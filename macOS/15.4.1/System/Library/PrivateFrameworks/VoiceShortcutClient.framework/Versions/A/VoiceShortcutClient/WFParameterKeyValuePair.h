@class NSString, WFEncodedTypedValue;

@interface WFParameterKeyValuePair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) WFEncodedTypedValue *parameterValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterKey:(id)a0 parameterValue:(id)a1;

@end
