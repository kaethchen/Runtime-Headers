@class NSUUID, NSScreen, NSString;

@interface WOWidget : NSObject {
    void /* unknown type, empty encoding */ _impl;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSScreen *screen;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
