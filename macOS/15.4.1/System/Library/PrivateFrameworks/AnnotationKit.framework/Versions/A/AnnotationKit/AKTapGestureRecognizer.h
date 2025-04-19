@class NSString;

@interface AKTapGestureRecognizer : NSClickGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>

@property BOOL penGestureDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;

@end
