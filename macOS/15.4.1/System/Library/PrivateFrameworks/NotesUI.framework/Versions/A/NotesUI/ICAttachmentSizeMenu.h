@class NSString, NSArray;

@interface ICAttachmentSizeMenu : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) short preferredViewSize;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selectedSizeAction;
@property (nonatomic) SEL selectedPlainLinkAction;
@property (readonly, nonatomic) BOOL supportsPlainLink;
@property (readonly, nonatomic) BOOL isOverrideVariant;

- (void).cxx_destruct;
- (id)createMenuItem;
- (id)initWithTitle:(id)a0 preferredViewSize:(short)a1 supportedSizes:(id)a2 supportsPlainLink:(BOOL)a3 isOverrideVariant:(BOOL)a4 target:(id)a5 selectedSizeAction:(SEL)a6 selectedPlainLinkAction:(SEL)a7;
- (id)localizedTitleForPlainLink;
- (id)localizedTitleForSize:(short)a0;
- (id)menuItemForPlainLink;
- (id)menuItemForSize:(short)a0;

@end
