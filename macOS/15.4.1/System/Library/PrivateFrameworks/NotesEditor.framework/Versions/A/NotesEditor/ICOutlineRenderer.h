@class ICOutlineController;

@interface ICOutlineRenderer : NSObject {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ textElementLocator;
    void /* unknown type, empty encoding */ hoveredCharacterObservation;
    void /* unknown type, empty encoding */ visibleUUIDs;
    void /* unknown type, empty encoding */ affordanceShownUUIDs;
    void /* unknown type, empty encoding */ isVoiceOverEnabledObservation;
    void /* unknown type, empty encoding */ isSwitchControlEnabledObservation;
}

@property (nonatomic, readonly) ICOutlineController *outlineController;
@property (nonatomic) void /* unknown type, empty encoding */ selectionVisibilityRequiresEditing;
@property (nonatomic, readonly) long long collapsibleSectionAffordanceExposures;
@property (nonatomic, readonly) long long collapsibleSectionAffordanceUsages;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTextView:(id)a0;
- (void)horizontalSizeClassDidChange;
- (void)resetCollapsibleSectionsAffordanceExposures;
- (void)resetCollapsibleSectionsAffordanceUsageData;
- (void)resetCollapsibleSectionsAffordanceUsages;
- (void)textViewLayoutDidChangeWithNotification:(id)a0;

@end
