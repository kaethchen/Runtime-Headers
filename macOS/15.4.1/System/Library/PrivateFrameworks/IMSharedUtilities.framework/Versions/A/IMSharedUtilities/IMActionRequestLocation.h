@interface IMActionRequestLocation : NSObject <IMChipActionProtocol, IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ sendPush;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSendPush:(BOOL)a0;

@end
