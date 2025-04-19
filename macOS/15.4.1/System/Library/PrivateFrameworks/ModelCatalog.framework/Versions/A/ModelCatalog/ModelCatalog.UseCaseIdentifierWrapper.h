@class NSString;

@interface ModelCatalog.UseCaseIdentifierWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ useCaseIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
