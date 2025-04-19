@class CBClassicManager, NSString, CBClassicInquiryAttributes;

@interface CBDeviceSelectorController : NSWindowController

@property (retain) CBClassicManager *classicManager;
@property (retain, nonatomic) CBClassicInquiryAttributes *classicInquiryAttributes;
@property (nonatomic) unsigned int discoveryOptions;
@property (retain) NSString *windowTitle;
@property (retain) NSString *headerText;
@property (retain) NSString *descriptionText;
@property (retain) NSString *promptText;
@property (retain) NSString *cancelButtonTitle;

- (void).cxx_destruct;
- (int)runModal;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)windowDidLoad;
- (void)addAllowedUUIDArray:(id)a0;
- (void)clearAllowedUUIDs;
- (id)getResults;
- (unsigned int)getDiscoveryOptions;

@end
