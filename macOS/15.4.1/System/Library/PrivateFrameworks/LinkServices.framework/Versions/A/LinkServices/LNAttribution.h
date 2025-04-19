@class NSData, NSString;

@interface LNAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *snippetModelData;
@property (readonly, copy, nonatomic) NSString *snippetModelBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSnippetModelData:(id)a0 snippetModelBundleIdentifier:(id)a1;

@end
