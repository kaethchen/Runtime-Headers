@class NSArray, NSString;

@interface SASetHomeContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL byPassServerFlow;
@property (copy, nonatomic) NSArray *currentHomes;
@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
