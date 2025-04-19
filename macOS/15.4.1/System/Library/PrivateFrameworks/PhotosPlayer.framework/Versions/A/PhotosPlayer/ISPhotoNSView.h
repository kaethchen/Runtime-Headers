@class CALayer, NSString;

@interface ISPhotoNSView : NSView <CALayerDelegate> {
    long long _photoOrientation;
}

@property (readonly, nonatomic) struct CGImage { } *photo;
@property (readonly, nonatomic) CALayer *contentLayer;
@property (nonatomic) long long preferredImageDynamicRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonISPhotoNSViewInitialization;
- (void)_updateLayerDynamicRange;
- (void)setPhoto:(struct CGImage { } *)a0 inOrientation:(long long)a1;

@end
