@class NSString, NSData, NSArray;

@interface WFAppDisplayRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *altText;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSData *snippetPluginModelData;
@property (readonly, nonatomic) NSString *snippetPluginModelBundleIdentifier;
@property (readonly, nonatomic) NSArray *synonyms;

+ (id)withTitle:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 altText:(id)a2 imageData:(id)a3 snippetPluginModelData:(id)a4 snippetPluginModelBundleIdentifier:(id)a5 synonyms:(id)a6;

@end
