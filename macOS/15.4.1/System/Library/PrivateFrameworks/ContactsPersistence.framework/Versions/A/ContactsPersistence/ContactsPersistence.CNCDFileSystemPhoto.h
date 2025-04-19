@class NSString;

@interface ContactsPersistence.CNCDFileSystemPhoto : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ imageDataURL;
    void /* unknown type, empty encoding */ largeImageDataURL;
    void /* unknown type, empty encoding */ cropRect;
    void /* unknown type, empty encoding */ cropRectHash;
    void /* unknown type, empty encoding */ cropRectID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
