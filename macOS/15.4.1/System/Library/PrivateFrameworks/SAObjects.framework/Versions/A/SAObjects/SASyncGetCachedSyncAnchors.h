@class NSString;

@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *interactionId;

+ (id)getCachedSyncAnchors;
+ (id)getCachedSyncAnchorsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
