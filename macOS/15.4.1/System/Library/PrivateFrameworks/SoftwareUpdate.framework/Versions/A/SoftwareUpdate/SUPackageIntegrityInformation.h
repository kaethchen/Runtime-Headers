@class NSURL, NSNumber, NSString;

@interface SUPackageIntegrityInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *integrityDataURL;
@property (readonly) NSNumber *integrityDataSize;
@property (readonly) NSString *integrityDataChecksum;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntegrityDataURL:(id)a0 withIntegrityDataSize:(id)a1 withIntegrityDataChecksum:(id)a2;

@end
