@class NSArray;

@interface HMDMediaGroupsAggregateData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying>

@property (copy) NSArray *destinations;
@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *groups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)encodeToProtoBufferData;
- (id)initWithProtoBufferData:(id)a0;
- (id)decodeDestinationControllersWithEncodedDestinationControllers:(id)a0;
- (id)decodeDestinationsWithEncodedDestinations:(id)a0;
- (id)decodeMediaGroupsWithEncodedMediaGroups:(id)a0;
- (id)encodedDestinationControllerEvents;
- (id)encodedDestinationEvents;
- (id)encodedMediaGroupEvents;
- (id)groupWithIdentifier:(id)a0;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1 groups:(id)a2;
- (id)sentinelDestination;
- (id)sentinelDestinationControllerData;
- (id)sentinelGroup;
- (id)sentinelIdentifier;

@end
