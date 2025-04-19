@class NSString, DKTaskPrepareForReboot;

@interface DMTDeauthorizationKitBackedErasePrimitives : NSObject <DMTErasePrimitives>

@property (retain, nonatomic) DKTaskPrepareForReboot *rebootTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performEraseWithCompletion:(id /* block */)a0;

@end
