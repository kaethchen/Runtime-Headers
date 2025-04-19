@class NSString, NSArray, NSMenu;
@protocol UINSFontPickerControllerDelegate, UINSFontPickerInfo, UINSFontPickerControllerConfiguration;

@interface UINSFontPickerController : NSObject <UINSFontPickerController> {
    NSArray *_recentFamilies;
    Class _infoClass;
    id<UINSFontPickerControllerConfiguration> _configuration;
    id<UINSFontPickerInfo> _selectedFontInfo;
    NSMenu *_menu;
}

@property (weak, nonatomic) id<UINSFontPickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_loadFonts;
- (id)_menuInfoForFamily:(id)a0;
- (id)_menuInfoForSystemFont;
- (void)_populateFacesForMenuItem:(id)a0;
- (void)_selectFont:(id)a0;
- (id)initWithInfoClass:(Class)a0 configuration:(id)a1;
- (void)presentAtLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)presentAtLocation:(struct CGPoint { double x0; double x1; })a0 inWindow:(id)a1;
- (void)setSelectedFont:(struct __CTFontDescriptor { } *)a0;

@end
