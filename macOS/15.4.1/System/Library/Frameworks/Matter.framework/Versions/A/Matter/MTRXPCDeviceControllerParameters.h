@class NSUUID;

@interface MTRXPCDeviceControllerParameters : MTRDeviceControllerAbstractParameters

@property (readonly, retain) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) id /* block */ xpcConnectionBlock;

- (void).cxx_destruct;
- (id)initWithXPConnectionBlock:(id /* block */)a0 uniqueIdentifier:(id)a1;

@end
