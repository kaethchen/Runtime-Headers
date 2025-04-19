@class NSString, IMKClipView, NSAppearance;

@interface IMKWindowController : NSWindowController <NSWindowDelegate>

@property (retain, nonatomic) IMKClipView *clipView;
@property (retain, nonatomic) NSAppearance *appearance;
@property (nonatomic) long long windowLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
