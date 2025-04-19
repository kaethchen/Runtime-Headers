@class NSString;

@interface TVRCImageTemplate : NSObject

@property (readonly, nonatomic) NSString *templateString;

+ (id)imageTemplateWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)urlForSize:(struct CGSize { double x0; double x1; })a0;

@end
