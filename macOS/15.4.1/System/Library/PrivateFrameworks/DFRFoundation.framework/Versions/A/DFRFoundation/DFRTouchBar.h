@interface DFRTouchBar : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic unsigned long long _epoch;
    struct DFRTouchBarHandle { unsigned int rawValue; } _handle;
    _Atomic long long _style;
    _Atomic long long _visiblePlacements;
    _Atomic double _bezelBrightness;
    _Atomic long long _colorTemperature;
    _Atomic double _glyphBrightness;
    _Atomic double _scale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frames[24];
}

+ (id)touchBarWithEpoch:(unsigned long long)a0 handle:(struct DFRTouchBarHandle { unsigned int x0; })a1;

@end
