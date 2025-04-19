@class NSArray, NSTouchDevice;

@interface NSFunctionRowDevice : NSObject

@property (class, readonly, copy) NSArray *functionRowDevices;
@property (class, readonly) NSFunctionRowDevice *defaultFunctionRowDevice;
@property (class, readonly) BOOL deviceDimmed;

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) NSTouchDevice *touchDevice;

+ (void)initialize;

@end
