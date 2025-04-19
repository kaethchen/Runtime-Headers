@class NSString, NSImage, MUVendorLinkViewModel;
@protocol MUVendorLinkMenuItemViewModelUpdateDelegate;

@interface MUVendorLinkMenuItemViewModel : NSObject

@property (weak, nonatomic) id<MUVendorLinkMenuItemViewModelUpdateDelegate> updateDelegate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MUVendorLinkViewModel *vendorLinkViewModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 vendorLinkViewModel:(id)a2;

@end
