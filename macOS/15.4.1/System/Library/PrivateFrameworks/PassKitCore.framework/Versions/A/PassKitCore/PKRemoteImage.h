@class NSURL;

@interface PKRemoteImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *remoteURL;
@property (nonatomic) unsigned long long scaleFactor;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)fetchImageWithCompletion:(id /* block */)a0;
- (id)initWithRemoteURL:(id)a0 scaleFactor:(unsigned long long)a1;
- (id)initWithRemoteURL:(id)a0 scaleFactor:(unsigned long long)a1 width:(double)a2 height:(double)a3;
- (BOOL)isEqualToRemoteImage:(id)a0;

@end
