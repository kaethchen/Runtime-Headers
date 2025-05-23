@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) OADBaseStyles *baseStyles;
@property (readonly, nonatomic) OADDrawableDefaults *drawableDefaults;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)validateTheme;

@end
