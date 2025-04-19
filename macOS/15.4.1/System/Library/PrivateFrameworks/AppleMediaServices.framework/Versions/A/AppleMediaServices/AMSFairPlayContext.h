@interface AMSFairPlayContext : NSObject

@property unsigned int contextID;

- (void)dealloc;
- (id)init;
- (void)destroyContext;
- (void)_validateFairPlayPath;
- (unsigned int)fairplayContextIDWithError:(id *)a0;

@end
