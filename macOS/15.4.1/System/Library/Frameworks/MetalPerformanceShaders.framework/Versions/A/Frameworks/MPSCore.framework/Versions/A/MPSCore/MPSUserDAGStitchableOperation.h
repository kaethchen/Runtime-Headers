@class NSString;

@interface MPSUserDAGStitchableOperation : NSObject

@property (readonly, nonatomic) NSString *functionName;

- (void)dealloc;
- (id)getStitchedFunction:(id)a0;
- (id)initWithFunctionName:(id)a0;

@end
