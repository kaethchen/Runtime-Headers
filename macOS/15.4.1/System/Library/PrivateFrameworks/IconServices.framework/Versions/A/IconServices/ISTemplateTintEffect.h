@class IFColor, NSString;

@interface ISTemplateTintEffect : NSObject <ISEffect>

@property (retain) IFColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
