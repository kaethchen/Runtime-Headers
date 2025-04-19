@class LNImage, LNDeferredLocalizedString, NSArray;

@interface LNDynamicOptionsSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNDeferredLocalizedString *title;
@property (readonly, nonatomic) LNDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNImage *image;
@property (readonly, nonatomic) NSArray *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0 title:(id)a1 subtitle:(id)a2 image:(id)a3;
- (id)initWithOptions:(id)a0 title:(id)a1;

@end
