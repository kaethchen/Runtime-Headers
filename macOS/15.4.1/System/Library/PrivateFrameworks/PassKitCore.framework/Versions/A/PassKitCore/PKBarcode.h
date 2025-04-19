@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) long long format;
@property (readonly, nonatomic) BOOL isTall;
@property (nonatomic) BOOL shouldRemoveQuietZone;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPassDictionary:(id)a0 bundle:(id)a1;

@end
