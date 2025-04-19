@class NSSet;
@protocol MRGroupSessionHandoffCoordinatorDelegate;

@interface MRGroupSessionHandoffCoordinator : NSObject

@property (readonly, nonatomic) NSSet *handoffSuppressedDevices;
@property (weak, nonatomic) id<MRGroupSessionHandoffCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
