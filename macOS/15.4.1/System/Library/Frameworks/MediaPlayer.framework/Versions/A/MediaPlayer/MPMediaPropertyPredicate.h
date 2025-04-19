@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    NSString *_property;
    id _value;
    long long _comparisonType;
}

@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) id value;
@property (nonatomic) long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithValue:(id)a0 forProperty:(id)a1;
+ (id)predicateWithValue:(id)a0 forProperty:(id)a1 comparisonType:(long long)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionOfValue:(id)a0 forProperty:(id)a1;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;

@end
