@class NSArray, _LSAEKeyDesc, NSAppleEventDescriptor, _LSOpen2Options, _LSLauncherOptions, _LSRemoteOpenCallApplicationParameters;

@interface _LSRemoteOpenCallInputs : NSObject <NSSecureCoding> {
    NSArray *inURLs;
    unsigned int inRoleMask;
    _LSAEKeyDesc *inAEParam;
    _LSRemoteOpenCallApplicationParameters *inAppParams;
    NSAppleEventDescriptor *inAnnotations;
    _LSOpen2Options *inOptions2;
    unsigned long long inPSNCount;
    _LSLauncherOptions *inLauncherOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
