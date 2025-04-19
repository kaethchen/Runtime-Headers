@class NSString, NSArray;

@interface PAMultipleImageDrawingDelegate : NSObject <PAImageDrawingDelegate> {
    NSArray *_imageKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 display:(id)a2 transform:(id)a3 context:(id)a4;
- (id)drawImageLayer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 display:(id)a2 transform:(id)a3 context:(id)a4;
- (id)initWithImageKeys:(id)a0;

@end
