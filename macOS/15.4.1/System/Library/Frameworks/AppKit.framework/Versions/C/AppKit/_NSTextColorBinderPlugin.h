@class NSString;

@interface _NSTextColorBinderPlugin : _NSBinderPlugin <_NSTextColorBinderPlugin> {
    struct __textColorBinderPluginFlags { unsigned char _isTextColorInvalidationCapable : 1; unsigned int _reservedTextColorBinderPlugin : 31; } _textColorBinderPluginFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUsableWithObject:(id)a0;

- (id)initWithBinder:(id)a0 object:(id)a1;
- (id)textColorInvalidationCapableObjectForObject:(id)a0;

@end
