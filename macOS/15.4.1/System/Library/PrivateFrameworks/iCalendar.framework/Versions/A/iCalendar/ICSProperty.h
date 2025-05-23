@class NSSet, NSMutableDictionary;

@interface ICSProperty : NSObject <NSSecureCoding, ICSWriting> {
    NSMutableDictionary *_parameters;
    unsigned long long _type;
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *propertiesToExcludeForChecksum;

+ (id)valueAndParameterClasses;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (unsigned long long)type;
- (id)value;
- (id)allParameters;
- (id)parameters;
- (void)setParameters:(id)a0;
- (id)initWithValue:(id)a0 type:(unsigned long long)a1;
- (BOOL)isMultiValued;
- (void)ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1 additionalParameters:(id)a2;
- (void)_appendDateTimeInDate:(id)a0 asUTCToResult:(id)a1;
- (void)_setParsedValues:(id)a0 type:(unsigned long long)a1;
- (void)addParameter:(id)a0 withRawValue:(id)a1 options:(unsigned long long)a2;
- (void)addParametersFromDictionary:(id)a0;
- (BOOL)alwaysHasParametersToSerialize;
- (id)parameterValueForName:(id)a0;
- (id)propertiesToHide;
- (id)propertiesToObscure;
- (void)removeParameterValueForName:(id)a0;
- (void)setParameterValue:(id)a0 forName:(id)a1;
- (void)setValue:(id)a0 type:(unsigned long long)a1;
- (void)setValueAsProperty:(id)a0 withRawValue:(const char *)a1 options:(unsigned long long)a2;
- (BOOL)shouldObscureParameter:(id)a0;
- (BOOL)shouldObscureValue;

@end
