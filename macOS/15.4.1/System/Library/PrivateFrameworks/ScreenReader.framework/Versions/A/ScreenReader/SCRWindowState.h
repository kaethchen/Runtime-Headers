@interface SCRWindowState : NSObject

@property struct CGPoint { double x; double y; } sourceOrigin;
@property struct CGPoint { double x; double y; } destinationOrigin;
@property (nonatomic) BOOL needToRestoreWindowPosition;
@property (nonatomic) BOOL needToRestoreDesktop;

@end
