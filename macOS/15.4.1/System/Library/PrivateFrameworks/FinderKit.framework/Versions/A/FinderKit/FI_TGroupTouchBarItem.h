@class NSString;

@interface FI_TGroupTouchBarItem : NSGroupTouchBarItem <TMarkTornDown>

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)aboutToTearDown;
- (void)setSubDelegates:(id)a0;

@end
