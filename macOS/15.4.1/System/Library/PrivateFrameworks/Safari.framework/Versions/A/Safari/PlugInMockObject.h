@class NSXPCConnection, NSUUID, NSString, NSURL, NSDate, NSArray, NSDictionary, NSBundle;
@protocol PKPlugIn;

@interface PlugInMockObject : NSObject <PKPlugIn, PKPlugInPrivate>

@property (retain) NSDictionary *plugInDictionary;
@property (retain) NSUUID *uuid;
@property (retain) NSString *identifier;
@property (retain) NSString *version;
@property (retain) NSURL *url;
@property (readonly) NSURL *containingUrl;
@property (readonly) BOOL onSystemVolume;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long userElection;
@property (readonly) id<PKPlugIn> supersededBy;
@property (readonly) NSUUID *multipleInstanceUUID;
@property (readonly) BOOL spent;
@property (readonly) BOOL active;
@property (readonly) id plugInPrincipal;
@property (readonly) id embeddedPrincipal;
@property (readonly) NSBundle *embeddedBundle;
@property (copy) id /* block */ notificationBlock;
@property (readonly) NSDate *timestamp;
@property (readonly) NSXPCConnection *pluginConnection;
@property (retain) NSDictionary *extensionState;
@property (retain) NSDictionary *environment;
@property (retain) NSArray *languages;
@property (copy) NSArray *preferredLanguages;
@property (readonly) NSArray *launchPersonas;
@property (copy) NSString *sandboxProfile;
@property (readonly) unsigned int extensionPointPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endUsing:(id /* block */)a0;
- (id)defaults;
- (id)export:(id *)a0;
- (void)beginUsing:(id /* block */)a0;
- (void)beginUsingRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)beginUsingRequest:(id)a0 error:(id *)a1;
- (void)beginUsingRequest:(id)a0 withSubsystemOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)beginUsingRequest:(id)a0 withSubsystemOptions:(id)a1 error:(id *)a2;
- (BOOL)beginUsingWithError:(id *)a0;
- (void)beginUsingWithSubsystemOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)beginUsingWithSubsystemOptions:(id)a0 error:(id *)a1;
- (id)createInstanceWithUUID:(id)a0;
- (void)endUsingRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)endUsingRequest:(id)a0 error:(id *)a1;
- (BOOL)endUsingWithError:(id *)a0;
- (void)localizedInfoDictionaryForKeys:(id)a0 completion:(id /* block */)a1;
- (void)setHostPrincipal:(id)a0 withProtocol:(id)a1;
- (void)setReplyQueue:(id)a0;
- (BOOL)useBundle:(id)a0 error:(id *)a1;

@end
