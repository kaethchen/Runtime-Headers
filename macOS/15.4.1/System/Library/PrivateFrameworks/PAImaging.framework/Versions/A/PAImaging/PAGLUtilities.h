@interface PAGLUtilities : NSObject

@property BOOL reportErrors;

+ (id)sharedUtilities;
+ (void)reportGLError:(unsigned int)a0;
+ (void)reportGLError:(unsigned int)a0 message:(id)a1;

- (id)init;
- (void)dumpGLState:(id)a0;

@end
