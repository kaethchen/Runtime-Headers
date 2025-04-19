@class NSPersonNameComponentsFormatter;
@protocol CNKeyDescriptor;

@interface CNContactFormatter : NSFormatter <NSSecureCoding> {
    NSPersonNameComponentsFormatter *_nameFormatter;
}

@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeysForNameOrder;
@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeysForDelimiter;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL ignoresOrganization;
@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) unsigned long long fallbackStyle;
@property (nonatomic) BOOL emphasizesPrimaryNameComponent;
@property (nonatomic) long long sortOrder;
@property long long style;

+ (id)descriptorForRequiredKeysForStyle:(long long)a0;
+ (id)stringFromContact:(id)a0 style:(long long)a1;
+ (long long)nameOrderForContact:(id)a0;
+ (id)posterNameComponentsForContact:(id)a0;
+ (id)abbreviatedStringFromContact:(id)a0 trimmingWhitespace:(BOOL)a1;
+ (id)attributedStringFromContact:(id)a0 style:(long long)a1 defaultAttributes:(id)a2;
+ (id)delimiterForContact:(id)a0;
+ (long long)nameEmphasisStyleForContact:(id)a0;
+ (long long)nameEmphasisStyleForContact:(id)a0 localeBasedEmphasisStyle:(long long)a1 preferNickname:(BOOL)a2;
+ (id)posterNameComponentsForContact:(id)a0 nameOrder:(long long)a1 localeEmphasisStyle:(long long)a2 preferNicknames:(BOOL)a3;
+ (long long)singleNameStyleForContact:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)descriptorForRequiredKeys;
- (id)stringFromContact:(id)a0;
- (id)attributedStringFromContact:(id)a0 defaultAttributes:(id)a1;
- (id)stringFromContact:(id)a0 attributes:(id)a1;
- (id)stringFromPotentiallySuggestedContact:(id)a0 relatedToProperty:(id)a1;

@end
