@class NSString;

@interface ICMFontManager : NSFontManager <NSMenuItemValidation>

@property (nonatomic) BOOL isTogglingBoldface;
@property (nonatomic) BOOL isTogglingItalics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMenuItemToggleBold:(id)a0;
+ (BOOL)isMenuItemToggleItalics:(id)a0;

@end
