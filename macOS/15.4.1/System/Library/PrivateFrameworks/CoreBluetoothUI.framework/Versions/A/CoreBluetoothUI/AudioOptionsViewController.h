@class CBClassicPeer, CBPeripheral;
@protocol AudioOptionsViewControllerAccessor;

@interface AudioOptionsViewController : NSViewController

@property CBClassicPeer *peer;
@property CBPeripheral *peripheral;
@property id<AudioOptionsViewControllerAccessor> audioOptionsViewControllerAccessor;

+ (id)createViewsForPeer:(id)a0;
+ (BOOL)peerHasViews:(id)a0;
+ (BOOL)peripheralHasViews:(id)a0;
+ (id)viewsSupported;

- (void)viewDidLoad;
- (void)loadPrefs;
- (void)handleClose;
- (void)addPopUpItemWithResKey:(id)a0 key:(id)a1 tag:(int)a2;
- (id)deviceSpecificLocalizedStringForKey:(id)a0;
- (id)viewsToAlign;

@end
