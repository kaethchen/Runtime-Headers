@class NSString;

@interface SAWLAddContentToWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;

+ (id)addContentToWatchList;
+ (id)addContentToWatchListWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
