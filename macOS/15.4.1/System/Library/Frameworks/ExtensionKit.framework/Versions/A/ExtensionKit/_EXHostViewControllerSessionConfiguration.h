@class NSString;
@protocol _EXSceneInitializationParameters;

@interface _EXHostViewControllerSessionConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL beginHostingImmediately;
@property (nonatomic) long long sizeBridgingOptions;
@property (nonatomic) BOOL retryOnHostingFailure;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) id<_EXSceneInitializationParameters> initializationParameters;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (copy) id /* block */ invalidationHandler;
@property (nonatomic) BOOL _shouldHostRemoteTextEffectsWindow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSceneIdentifier:(id)a0;

@end
