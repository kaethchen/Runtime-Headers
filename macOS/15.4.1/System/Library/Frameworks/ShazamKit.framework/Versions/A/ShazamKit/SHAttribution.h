@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *teamIdentifier;
@property (readonly, copy) NSString *productName;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly, copy) NSString *containingAppBundleIdentifier;

+ (id)productNameForBundleIdentifier:(id)a0;
+ (id)mediaLibraryAttributionExceptionPlist;
+ (id)musicRecognitionSensorActivityAttributionExceptionPlist;
+ (BOOL)requiresMediaLibraryAttributionForBundleIdentifier:(id)a0;
+ (BOOL)requiresMusicRecognitionSensorActivityAttributionForBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)configureAttributionForConnection:(id)a0;
- (void)configureAttributionForTask:(struct __SecTask { } *)a0;

@end
