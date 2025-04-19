@class NSString, NSNumber, NSURL;

@interface CTLazuliFileThumbnailInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSNumber *fileSizeInBytes;
@property (retain, nonatomic) NSString *untrustedContentType;
@property (retain, nonatomic) NSURL *dataUrl;
@property (retain, nonatomic) NSString *validUntil;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliFileThumbnailInformation:(id)a0;

@end
