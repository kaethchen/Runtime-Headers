@class NSArray, AXFScreen, NSString;
@protocol AXFScreenSourceDelegate, NSLocking;

@interface _AXFScreenSourceHardware : NSObject <AXFScreenSource>

@property (retain, nonatomic) NSArray *screens;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalScreenBounds;
@property (retain, nonatomic) AXFScreen *mainScreen;
@property (retain, nonatomic) id<NSLocking> _screenInfoCacheLock;
@property (weak, nonatomic) id<AXFScreenSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_activeDisplayDidChange:(id)a0;
- (void)_didChangeScreenParameters:(id)a0;
- (void)_refreshScreenInfos;

@end
