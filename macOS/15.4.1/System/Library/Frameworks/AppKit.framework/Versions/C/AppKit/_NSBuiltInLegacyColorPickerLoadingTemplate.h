@class NSString;

@interface _NSBuiltInLegacyColorPickerLoadingTemplate : NSObject <_NSColorPickerTemplate> {
    Class _pickerClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createAndPrepareColorPickerWithInitialMask:(unsigned long long)a0 colorPanel:(id)a1 completionHandle:(id /* block */)a2;
- (id)initWithClass:(Class)a0;

@end
