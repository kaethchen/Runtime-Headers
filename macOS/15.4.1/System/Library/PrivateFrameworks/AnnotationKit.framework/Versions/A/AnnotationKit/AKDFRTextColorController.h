@class NSColor, NSColorPickerTouchBarItem, NSString;

@interface AKDFRTextColorController : NSObject <AKTextAttributesUserInterfaceItem>

@property (copy) NSColor *color;
@property (retain) NSColorPickerTouchBarItem *colorBarItem;
@property (readonly) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)convertTextAttributes:(id)a0;
- (void)syncTextAttributesToUI:(id)a0;

@end
