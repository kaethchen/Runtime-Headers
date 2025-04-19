@class RBSProcessHandle, NSDictionary, NSError, RBSAssertion;

@interface RBSLaunchResponse : NSObject

@property (retain, nonatomic) RBSProcessHandle *process;
@property (retain, nonatomic) RBSAssertion *assertion;
@property (retain, nonatomic) NSDictionary *managedEndpointByLaunchIdentifier;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)_init;

@end
