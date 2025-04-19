@class NSString;

@interface CNCDIOSLegacyIdentifierXPCRegistrar : NSObject <CNCDIOSLegacyIdentifierRegistration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)connection;
- (id)legacyIdentifierRegistrationsForRequest:(id)a0 error:(id *)a1;

@end
