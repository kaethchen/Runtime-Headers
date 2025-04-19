@class NSString;

@interface _NSRTFPboardTypeConverter : _NSPboardTypeConverter <NSPasteboardItemDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_getConvertedDataFromPasteboard:(id)a0 atIndex:(unsigned long long)a1;
+ (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;

- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;

@end
