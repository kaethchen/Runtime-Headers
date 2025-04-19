@class NSView;

@interface CPKScrollEnclosureView : NSView

@property (retain, nonatomic) NSView *auxiliaryView;

- (void)dealloc;
- (void)adjustAuxiliaryView:(BOOL)a0;
- (void)setAuxiliaryView:(id)a0 isRTL:(BOOL)a1;

@end
