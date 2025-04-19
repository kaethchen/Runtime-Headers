@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer {
    NSString *_type;
    double _factor;
    BOOL _isMaster;
}

@property (readonly) unsigned char direction;

- (void)dealloc;
- (void)recognize;
- (void)_postProcess;
- (void)touchEnded:(id)a0;
- (void)_addSpecificObjectToAction:(id)a0;
- (id)initWithRenderer:(id)a0 endAction:(id)a1 direction:(unsigned char)a2 andSender:(id)a3;
- (id)initWithRenderer:(id)a0 masterAction:(id)a1 direction:(unsigned char)a2 andSender:(id)a3;
- (id)initWithRenderer:(id)a0 startAction:(id)a1 direction:(unsigned char)a2 andSender:(id)a3;
- (void)touchMoved:(id)a0;

@end
