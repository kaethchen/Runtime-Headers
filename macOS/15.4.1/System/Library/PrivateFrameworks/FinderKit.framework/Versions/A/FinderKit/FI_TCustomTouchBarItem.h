@class NSString;

@interface FI_TCustomTouchBarItem : NSCustomTouchBarItem <TMarkTornDown>

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setView:(id)a0;
- (void)setViewController:(id)a0;
- (void)aboutToTearDown;
- (void)aboutToTearDownViewAndController;

@end
