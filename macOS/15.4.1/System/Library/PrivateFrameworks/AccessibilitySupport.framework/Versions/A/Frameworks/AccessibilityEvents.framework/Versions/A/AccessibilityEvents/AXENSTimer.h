@class NSTimer, NSString;

@interface AXENSTimer : NSObject <AXETimer>

@property (retain, nonatomic) NSTimer *_timer;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) double timeInterval;
@property (readonly) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
