@interface SSShareDisplaySharePlayRFBRequest : SSLocalCommandRequest

@property (readonly, nonatomic) unsigned int displayID;

+ (unsigned long long)xpcIdentifier;

- (id)initWithDisplayID:(unsigned int)a0;
- (id)initWithXPCRepresentation:(id)a0;
- (id)xpcRepresentation;

@end
