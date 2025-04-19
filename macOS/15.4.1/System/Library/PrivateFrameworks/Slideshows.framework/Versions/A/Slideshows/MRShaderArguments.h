@class NSString;

@interface MRShaderArguments : NSObject

@property (copy) NSString *filter0;
@property (copy) NSString *filter1;
@property (copy) NSString *filter2;
@property (copy) NSString *filter3;
@property (nonatomic) BOOL texture0ClampsToBorder;
@property (nonatomic) BOOL texture1ClampsToBorder;

- (void)dealloc;

@end
