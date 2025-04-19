@class NSString;

@interface SMPairingCode : NSObject

@property (retain) NSString *digits;

- (id)init;
- (void).cxx_destruct;
- (id)formattedRepresentation;
- (id)generateRandomCode;

@end
