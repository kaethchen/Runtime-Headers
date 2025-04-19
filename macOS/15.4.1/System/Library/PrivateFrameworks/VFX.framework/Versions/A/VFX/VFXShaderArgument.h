@class NSString;

@interface VFXShaderArgument : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;

- (void)dealloc;

@end
