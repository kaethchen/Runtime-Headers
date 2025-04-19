@class NSSharingService, NSImageView, NSTextField, NSString;
@protocol FASharingTransportItemDelegate;

@interface FASharingTransportItem : NSViewController <FASharingTransportItemViewDelegate> {
    id<FASharingTransportItemDelegate> _delegate;
}

@property (retain) NSImageView *imageView;
@property (retain) NSTextField *transportTitle;
@property (readonly) NSSharingService *sharingService;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didClick;
- (id)initWithSharingService:(id)a0 delegate:(id)a1;

@end
