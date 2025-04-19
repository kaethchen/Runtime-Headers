@class NSString;

@interface AKLongPressGestureRecognizer : NSPressGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>

@property BOOL penGestureDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
