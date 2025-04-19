@interface SSShareWindowSharePlayRFBRequest : SSLocalCommandRequest

@property (readonly, nonatomic) unsigned int windowID;

+ (unsigned long long)xpcIdentifier;

- (id)initWithWindowID:(unsigned int)a0;
- (id)initWithXPCRepresentation:(id)a0;
- (id)xpcRepresentation;

@end
