@class NSString, PKImage, NSData;

@interface PKPassTileImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) long long tintColor;
@property (copy, nonatomic) NSString *contextMenuSymbolName;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL hasColorContent;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) PKImage *image;
@property (readonly, copy, nonatomic) NSData *imageHash;

+ (id)createWithSymbolName:(id)a0 tintColor:(long long)a1;
+ (id)_createDefaultDisclosureImage;
+ (id)_createForDictionary:(id)a0;
+ (id)createImageWithImage:(id)a0 tintColor:(long long)a1 hasColorContent:(BOOL)a2;
+ (id)createWithSymbolName:(id)a0 contextMenuSymbolName:(id)a1 tintColor:(long long)a2;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)createResolvedImageWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedImage:(id)a0;

@end
