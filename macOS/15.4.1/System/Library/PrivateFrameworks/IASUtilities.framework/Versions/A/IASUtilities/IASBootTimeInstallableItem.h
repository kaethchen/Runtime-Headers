@class NSString, NSDictionary, NSURL;

@interface IASBootTimeInstallableItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *interfaceType;
@property (copy) NSDictionary *evaluatorMetaInfo;
@property (copy) NSURL *productURL;
@property (copy) NSString *clientIdentifier;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProductAtURL:(id)a0 error:(id *)a1;
- (BOOL)isEqualToInstallableItem:(id)a0;

@end
