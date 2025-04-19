@class NSUUID, NSDictionary, NSString, NSObject;
@protocol NSMenuBarLifecycleProtocol;

@interface NSMenuBarDisplayWindow : NSObject <NSMenuBarDisplayWindowProtocol, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _apertureFrame;
    double _backingScaleFactor;
    unsigned int _displayID;
    BOOL _isGroupingUpdates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isGroupingUpdates;
@property BOOL needsUpdate;
@property (retain) NSUUID *identifier;
@property (setter=setVisible:) BOOL isVisible;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } apertureFrame;
@property double backingScaleFactor;
@property unsigned int displayID;
@property (weak) NSObject<NSMenuBarLifecycleProtocol> *impl;
@property (readonly, copy) NSDictionary *presentationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)windowWithImpl:(id)a0 display:(unsigned int)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 aperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)beginUpdates;
- (void)endUpdates;
- (id)initWithImpl:(id)a0 display:(unsigned int)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 aperture:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
