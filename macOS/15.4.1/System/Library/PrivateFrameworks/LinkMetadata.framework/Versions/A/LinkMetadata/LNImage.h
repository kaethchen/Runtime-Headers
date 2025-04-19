@class INImage, NSValue;

@interface LNImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INImage *inImage;
@property (readonly, nonatomic) NSValue *size;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) LNImage *proxiedImageCopy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSystemImageNamed:(id)a0;
- (id)initWithImageNamed:(id)a0;
- (id)initWithData:(id)a0 renderingMode:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
- (id)initWithINImage:(id)a0 displayStyle:(unsigned long long)a1 size:(id)a2;
- (id)initWithImageNamed:(id)a0 renderingMode:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
- (id)initWithURL:(id)a0 renderingMode:(unsigned long long)a1 displayStyle:(unsigned long long)a2;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2 renderingMode:(unsigned long long)a3 displayStyle:(unsigned long long)a4;
- (id)initWithData:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithINImage:(id)a0;
- (id)initWithImageNamed:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2 renderingMode:(unsigned long long)a3;

@end
