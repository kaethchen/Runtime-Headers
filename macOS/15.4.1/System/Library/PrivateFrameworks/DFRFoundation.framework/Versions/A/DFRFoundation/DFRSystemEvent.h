@class NSString;

@interface DFRSystemEvent : NSObject {
    NSString *_systemIdentifier;
    long long _type;
    double _timestamp;
    unsigned long long _modifiers;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenRect;
    long long _touchIndex;
    struct CGPoint { double x; double y; } _touchPoint;
}

- (void).cxx_destruct;
- (id)initWithXPCMessage:(id)a0;

@end
