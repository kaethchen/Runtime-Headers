@class NSSharingService, NSString, NSView, NSArray, NSMutableArray, NSStackView;
@protocol FASharingViewTransportDelegate;

@interface FASharingViewController : NSViewController <FASharingTransportItemDelegate> {
    NSArray *_sharingServices;
    NSMutableArray *_transportItems;
    id<FASharingViewTransportDelegate> _delegate;
    NSStackView *_transportStackView;
    NSSharingService *_selectedService;
}

@property (retain) NSView *transportView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)cancelPressed:(id)a0;
- (void)_setIntialSelection;
- (void)_setUpStackViewWithViews:(id)a0;
- (void)continuePressed:(id)a0;
- (id)initWithSharingServices:(id)a0 delegate:(id)a1;
- (void)sharingTransportItem:(id)a0 didSelectService:(id)a1;

@end
