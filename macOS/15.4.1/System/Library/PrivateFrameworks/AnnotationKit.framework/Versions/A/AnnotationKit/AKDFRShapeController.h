@class NSTouchBarItem, NSStackView, NSStepperTouchBarItem;

@interface AKDFRShapeController : AKDFRAnnotationPropertiesController

@property (retain) NSTouchBarItem *lineStyleItem;
@property (retain) NSStepperTouchBarItem *lineWidthStepperItem;
@property (retain) NSStackView *lineStyleView;

+ (id)_accessibilityIdentifierForTag:(long long)a0;
+ (id)_accessibilityLabelFromTag:(long long)a0;
+ (id)_imageFromTag:(long long)a0;

- (void).cxx_destruct;
- (id)itemIdentifiers;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (id)_createButtonWithTag:(long long)a0;
- (void)_createLineWidthStepperItem;
- (void)_initializeLineStyleView;
- (void)_lineWidthDidChange;

@end
