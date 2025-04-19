@class NSString, GCMotion;

@interface _GCAssertingProfile : NSObject <GCNamedProfile>

@property (readonly) NSString *name;
@property (retain) GCMotion *_motion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)sampleRate;
- (id)initWithController:(id)a0;
- (void)setController:(id)a0;
- (id)productCategory;
- (void)setPlayerIndex:(long long)a0;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)setButton:(id)a0 pressed:(BOOL)a1;
- (void)setButton:(id)a0 value:(double)a1;
- (void)setDpad:(id)a0 x:(double)a1 y:(double)a2;
- (id /* block */)valueChangedHandler;

@end
