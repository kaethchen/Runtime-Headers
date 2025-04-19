@class NSError, NSInvocation;

@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject

@property (readonly) NSInvocation *invocation;
@property (readonly) NSError *error;

+ (id)recordedAttemptWithOriginalInvocation:(id)a0 target:(id)a1 error:(id)a2;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)perform;
- (id)initWithOriginalInvocation:(id)a0 target:(id)a1 error:(id)a2;

@end
