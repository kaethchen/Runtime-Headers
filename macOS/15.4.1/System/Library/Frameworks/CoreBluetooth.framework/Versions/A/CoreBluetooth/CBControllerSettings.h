@interface CBControllerSettings : NSObject <CUXPCCodable>

@property (nonatomic) int discoverableState;
@property (nonatomic) char hid3ppLELegacyMode;
@property (nonatomic) char setupAssistantIfNoKeyboard;
@property (nonatomic) char setupAssistantIfNoPointingDevice;
@property (nonatomic) char spatialSoundProfileAllowed;
@property (nonatomic) char bleAdvRSSI;

- (id)description;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
