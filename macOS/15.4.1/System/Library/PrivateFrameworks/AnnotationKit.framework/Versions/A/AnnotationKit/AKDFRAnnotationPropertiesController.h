@class AKDFRColorPickerController, NSString, NSColorPickerTouchBarItem, NSGroupTouchBarItem;
@protocol AKDFRAnnotationPropertiesControllerDelegate;

@interface AKDFRAnnotationPropertiesController : NSObject <NSTouchBarDelegate>

@property (retain) NSGroupTouchBarItem *touchBarItem;
@property (retain) NSColorPickerTouchBarItem *fillColorItem;
@property (retain) AKDFRColorPickerController *fillColorPickerController;
@property (retain) NSColorPickerTouchBarItem *strokeColorItem;
@property (retain) AKDFRColorPickerController *strokeColorPickerController;
@property (weak) id<AKDFRAnnotationPropertiesControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemIdentifiers;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)colorPickerAction:(id)a0;

@end
