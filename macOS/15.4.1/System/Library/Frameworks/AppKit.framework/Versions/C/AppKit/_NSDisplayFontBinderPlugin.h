@class NSString;

@interface _NSDisplayFontBinderPlugin : _NSBinderPlugin <_NSDisplayFontBinderPlugin> {
    struct __displayFontBinderPluginFlags { unsigned char _isFontInvalidationCapable : 1; unsigned int _reservedDisplayFontBinderPlugin : 31; } _displayFontBinderPluginFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUsableWithObject:(id)a0;

- (id)fontInvalidationCapableObjectForObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;

@end
