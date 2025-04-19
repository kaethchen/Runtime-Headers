@class NSString;

@interface ICNFMCMimeCharset : NSObject

@property (readonly) unsigned long long encoding;
@property (readonly, copy, nonatomic) NSString *charsetName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL useBase64InHeaders;
@property (readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;

+ (id)charsetForEncoding:(unsigned long long)a0;
+ (id)preferredMimeCharset;
+ (id)allMimeCharsets;
+ (unsigned long long)encodingVariantForEncoding:(unsigned long long)a0 address:(id)a1;
+ (id)encodingVariantsForRecipients:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCFEncoding:(unsigned int)a0;

@end
