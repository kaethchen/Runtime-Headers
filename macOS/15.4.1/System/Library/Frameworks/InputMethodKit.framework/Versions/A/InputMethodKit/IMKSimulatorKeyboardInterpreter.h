@class NSData, NSString;

@interface IMKSimulatorKeyboardInterpreter : NSObject

@property (retain, nonatomic) NSData *keyboardLayoutData;
@property (retain, nonatomic) NSString *keyboardLayoutIdentifier;

+ (id)sharedKeyboardInterpreter;

- (void)dealloc;
- (id)modifiedEvent:(id)a0;
- (void)rebuildKeyboardCache;

@end
