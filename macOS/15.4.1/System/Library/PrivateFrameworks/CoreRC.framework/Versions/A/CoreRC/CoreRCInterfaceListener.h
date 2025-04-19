@class NSMutableArray;
@protocol CoreRCInterfaceListenerDelegate;

@interface CoreRCInterfaceListener : NSObject

@property (nonatomic) id<CoreRCInterfaceListenerDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *interfaces;

- (void)dealloc;
- (id)init;
- (void)scheduleWithDispatchQueue:(id)a0;
- (void)addInterface:(id)a0;
- (id)firstInterface;
- (id)initWithInterfaceController:(id)a0;
- (void)removeInterface:(id)a0;
- (void)unscheduleFromDispatchQueue:(id)a0;

@end
