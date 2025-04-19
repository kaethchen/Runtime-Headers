@class NSString, NSBundle;

@interface _NSInProcessLegacyColorPickerLoadingTemplate : NSObject <_NSColorPickerTemplate> {
    NSBundle *_bundle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBundle:(id)a0;
- (void)createAndPrepareColorPickerWithInitialMask:(unsigned long long)a0 colorPanel:(id)a1 completionHandle:(id /* block */)a2;

@end
