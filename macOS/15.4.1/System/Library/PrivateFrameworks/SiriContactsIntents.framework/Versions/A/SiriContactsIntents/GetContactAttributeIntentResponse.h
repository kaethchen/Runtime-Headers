@class NSArray, NSString;

@interface GetContactAttributeIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, copy) NSString *property;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
