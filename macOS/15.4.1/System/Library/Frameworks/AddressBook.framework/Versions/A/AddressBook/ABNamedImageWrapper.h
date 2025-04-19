@class NSImage, NSString;

@interface ABNamedImageWrapper : NSObject

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *name;

+ (id)namedImageWrapperWithImage:(id)a0 name:(id)a1 scale:(long long)a2 fontSize:(double)a3;

- (void).cxx_destruct;

@end
