@class NSArray, GEOResourceManifestConfiguration, NSString;

@interface GEOResourceFetchRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL unpack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (BOOL)isValid;
- (void).cxx_destruct;
- (unsigned long long)reply;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
