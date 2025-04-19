@class NSString;

@interface ModelCatalog.ResourceContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resourceData;
    void /* unknown type, empty encoding */ resourceType;
    void /* unknown type, empty encoding */ assetBacked;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
