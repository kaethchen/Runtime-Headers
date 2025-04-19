@class NSString, NSBundle;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) NSBundle *bundle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageName:(id)a0 contentMode:(long long)a1 bundle:(id)a2;

@end
