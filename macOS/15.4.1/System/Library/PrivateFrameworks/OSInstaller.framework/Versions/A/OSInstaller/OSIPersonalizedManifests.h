@class NSURL;

@interface OSIPersonalizedManifests : NSObject

@property (readonly) NSURL *recoveryBootManifestsURL;

- (id)init;
- (BOOL)_dittoFrom:(id)a0 to:(id)a1;
- (id)_personalizedManifestsURL;
- (BOOL)_sanityCheckPersonalizedManifests:(id)a0;
- (BOOL)installBootManifestsToURL:(id)a0;
- (BOOL)installFirmwareUpdateManifestsToURL:(id)a0;

@end
