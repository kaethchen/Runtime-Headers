@class NSURL;

@interface QLImageWrapper : NSObject <NSSecureCoding> {
    struct CGImage { } *_image;
    NSURL *_url;
    BOOL _discarded;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapperWithImage:(struct CGImage { } *)a0 url:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)image;
- (void)discard;
- (void)_startLoadingImage;

@end
