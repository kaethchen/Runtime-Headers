@class NSArray, NSString;

@interface VZBridgedNetworkInterface : NSObject

@property (class, readonly, copy) NSArray *networkInterfaces;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *localizedDisplayName;

+ (id)_interfaceWithIdentifier:(id)a0 error:(id *)a1;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
