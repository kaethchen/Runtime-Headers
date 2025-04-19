@class NSString, NSDictionary, PKColor, NSURL;

@interface PKDiscoveryMedia : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *urls;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (readonly, nonatomic) NSString *passKitUIImageName;
@property (readonly, nonatomic) NSURL *localAssetURL;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_remoteAssetForScale:(double)a0 isExpandedView:(BOOL)a1;
- (void)downloadImageDataWithScale:(double)a0 shouldWriteData:(BOOL)a1 isExpandedView:(BOOL)a2 completion:(id /* block */)a3;
- (id)imageDataFromCacheWithScale:(double)a0 isExpandedView:(BOOL)a1;

@end
