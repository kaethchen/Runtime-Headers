@class NSTouchBar, NSString, CNContact;
@protocol CNTouchBarControllerDelegate;

@interface CNTouchBarController : NSObject <NSTouchBarProvider>

@property (weak) id<CNTouchBarControllerDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
