@protocol MREmulatedGameControllerDelegate;

@interface MREmulatedGameController : NSObject

@property (readonly, nonatomic) int profile;
@property (nonatomic) double buttonAUpDelay;
@property (weak, nonatomic) id<MREmulatedGameControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (void)sendGameControllerEvent:(id)a0;

@end
