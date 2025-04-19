@class NSString, SCRunningApplication;

@interface SCWindow : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _windowID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSString *_title;
    long long _windowLayer;
    BOOL _isOnScreen;
    BOOL _isActive;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int windowID;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) NSString *title;
@property (readonly) long long windowLayer;
@property (readonly) SCRunningApplication *owningApplication;
@property (readonly, getter=isOnScreen) BOOL onScreen;
@property (readonly, getter=isActive) BOOL active;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)initWithDict:(id)a0;
- (BOOL)isEqualToSCWindow:(id)a0;
- (id)owningAppliation;

@end
