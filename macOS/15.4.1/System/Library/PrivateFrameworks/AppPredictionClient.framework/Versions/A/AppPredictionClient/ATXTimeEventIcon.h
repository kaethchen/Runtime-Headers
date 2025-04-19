@class NSString, NSData;

@interface ATXTimeEventIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSData *contactImageData;
@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) NSString *backgroundColorName;
@property (readonly, copy, nonatomic) NSString *foregroundColorName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0;
- (id)initWithContactImageData:(id)a0;
- (id)initWithSymbolImageName:(id)a0 backgroundColorName:(id)a1 foregroundColorName:(id)a2;

@end
