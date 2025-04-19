@class NSString;

@interface ModelCatalog.ResourceBundleContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resourceBundleData;
    void /* unknown type, empty encoding */ resourceBundleType;
    void /* unknown type, empty encoding */ assetBacked;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
