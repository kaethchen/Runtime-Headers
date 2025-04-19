@class NSString, NSClickGestureRecognizer;

@interface PXNSPortraitFocusView : PXPortraitFocusView <NSGestureRecognizerDelegate>

@property (retain, nonatomic) NSClickGestureRecognizer *clickRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
