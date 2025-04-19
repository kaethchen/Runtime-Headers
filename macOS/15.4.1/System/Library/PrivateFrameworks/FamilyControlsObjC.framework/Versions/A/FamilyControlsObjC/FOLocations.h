@class NSURL;

@interface FOLocations : NSObject

@property (class, readonly) NSURL *familyControlsAuthorization;

+ (id)sharedDirectory;
+ (id)familyControlsDirectory;

@end
