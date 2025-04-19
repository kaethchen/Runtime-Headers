@class NSString, CAContext;

@interface DFRElement : NSObject {
    unsigned long long _epoch;
    NSString *_name;
    NSString *_minimizedIdentifier;
    NSString *_systemIdentifier;
    CAContext *_context;
    id _accessibility;
    long long _placement;
    id /* block */ _animationHandler;
    struct CGSize { double width; double height; } _preferredSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    BOOL _registered;
    BOOL _active;
    _Atomic long long _colorTemperature;
    _Atomic double _bezelBrightness;
    _Atomic double _glyphBrightness;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_initWithAttrs:(id)a0;

@end
