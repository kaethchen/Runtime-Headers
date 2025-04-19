@class NSButton, NSProgressIndicator, GEOCityPickerViewPrivController, GEOCity, NSObject, NSComboBox;
@protocol GEOCityPickerViewDelegate;

@interface GEOCityPickerView : NSView {
    GEOCityPickerViewPrivController *viewPrivController;
    GEOCity *selectedCity;
    BOOL isUIBounded;
    NSComboBox *comboBox;
    NSButton *timeZoneButton;
    NSProgressIndicator *progressIndicator;
}

@property (retain, nonatomic) GEOCity *selectedCity;
@property (getter=isEnabled) BOOL enabled;
@property NSObject<GEOCityPickerViewDelegate> *delegate;

- (void)dealloc;
- (void)awakeFromNib;
- (void)viewWillMoveToWindow:(id)a0;
- (void)adjustBindings:(id)a0;
- (void)_bidirectionalBind:(id)a0 betweenObject:(id)a1 otherObject:(id)a2 options:(id)a3;
- (void)_bidirectionalUnbind:(id)a0 betweenObject:(id)a1 otherObject:(id)a2;
- (void)_bindPublicToPrivateProperties;
- (id)_geoKitManagedObjectContext;
- (void)_unbindPublicToPrivateProperties;
- (void)selectCityWithGeonameID:(unsigned long long)a0;
- (void)selectDefaultCity;
- (id)viewPrivController;

@end
