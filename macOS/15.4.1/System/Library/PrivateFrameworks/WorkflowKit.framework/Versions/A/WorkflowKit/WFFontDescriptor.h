@class NSDictionary;

@interface WFFontDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)descriptorWithSerializedRepresentation:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)serializedRepresentation;
- (id)fontWithSize:(double)a0;
- (id)initWithFontAttributes:(id)a0;
- (id)family;
- (id)visibleName;
- (id)face;
- (id)initWithPrivateRepresentation:(id)a0;

@end
