@class NSArray, NSSet;

@interface FASettingsPresetComputedProperty : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ conditions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) NSSet *dependencies;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)computedValueWithValueProvider:(id /* block */)a0;
- (id)initWithConditions:(id)a0;

@end
