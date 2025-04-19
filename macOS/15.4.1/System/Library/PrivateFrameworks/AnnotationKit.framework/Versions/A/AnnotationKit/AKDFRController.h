@class AKController, AKDFRHighlightsController, NSGroupTouchBarItem, NSString, NSTouchBarItem, AKDFRTextController, AKDFRShapeController;

@interface AKDFRController : NSObject <NSTouchBarDelegate, AKDFRAnnotationPropertiesControllerDelegate>

@property (weak) AKController *controller;
@property BOOL centersWithPrincipleItems;
@property (retain) AKDFRTextController *textController;
@property (retain) AKDFRShapeController *shapeController;
@property (retain) AKDFRHighlightsController *dfrHighlightsController;
@property (retain) NSTouchBarItem *sketchItem;
@property (retain) NSTouchBarItem *textItem;
@property (retain, nonatomic) NSGroupTouchBarItem *mainTouchBar;
@property BOOL isInDFRAction;
@property (copy) id /* block */ updateDFRBlock;
@property (readonly, nonatomic) NSGroupTouchBarItem *highlightsTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accessibilityIdentifierForTag:(long long)a0;
+ (id)_accessibilityLabelFromTag:(long long)a0;
+ (id)_imageFromTag:(long long)a0;
+ (id)createButtonWithTag:(long long)a0 target:(id)a1 action:(SEL)a2;

- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)_touchBarItemIdentifiers;
- (id)initWithController:(id)a0;
- (void)updateTouchBar;
- (void)revalidateItems;
- (void)setStrokeColorUIDisplayToColor:(id)a0;
- (id)_createButtonWithTag:(long long)a0;
- (id)_principleItemIdentifier;
- (void)_revalidateItems;
- (void)_validateButton:(id)a0;
- (void)_validateDefaultTools;
- (void)_validateLineTools;
- (void)_validateShapeControls;
- (void)_validateTextControls;
- (void)forwardToActionControllerFrom:(id)a0;
- (void)lineWidthActionFrom:(id)a0;
- (void)setFillColorUIDisplayToColor:(id)a0;

@end
