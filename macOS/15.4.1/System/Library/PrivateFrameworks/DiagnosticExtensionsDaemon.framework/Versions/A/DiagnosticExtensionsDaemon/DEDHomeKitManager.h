@class NSString;

@interface DEDHomeKitManager : NSObject

@property (readonly) NSString *homeKitIdentifier;
@property (readonly) NSString *homeTheaterSystemName;
@property (readonly) NSString *homeTheaterSystemIdentifier;

+ (id)sharedInstance;

- (void)start;
- (BOOL)isHomeKitResident;

@end
