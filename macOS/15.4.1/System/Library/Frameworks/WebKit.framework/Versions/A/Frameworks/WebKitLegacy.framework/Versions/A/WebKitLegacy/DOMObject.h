@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {
    struct DOMObjectInternal { } *_internal;
}

@property (readonly) DOMStyleSheet *sheet;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
