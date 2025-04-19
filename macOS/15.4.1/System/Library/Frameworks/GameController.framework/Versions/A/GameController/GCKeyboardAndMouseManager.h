@class NSSet, NSString;

@interface GCKeyboardAndMouseManager : NSObject <GCDeviceSessionDeviceProvider>

@property (readonly, copy) NSSet *keyboards;
@property (readonly, copy) NSSet *mice;
@property (readonly, copy) NSSet *controllers;
@property (readonly, copy) NSSet *racingWheels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;

@end
