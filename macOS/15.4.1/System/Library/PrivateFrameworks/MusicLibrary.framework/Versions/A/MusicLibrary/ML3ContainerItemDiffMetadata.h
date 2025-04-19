@class NSString;

@interface ML3ContainerItemDiffMetadata : NSObject

@property (nonatomic) long long persistentID;
@property (nonatomic) long long containerPersistentID;
@property (nonatomic) long long itemPersistentID;
@property (nonatomic) long long newPosition;
@property (nonatomic) long long previousPosition;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *positionUUID;
@property (copy, nonatomic) NSString *occurrenceID;

+ (id)diffMetadataWithPersistentID:(long long)a0 containerPersistentID:(long long)a1 itemPersistentID:(long long)a2 newPosition:(long long)a3 previousPosition:(long long)a4 uuid:(id)a5 positionUUD:(id)a6 occurrenceID:(id)a7;
+ (id)diffMetadataWithPersistentID:(long long)a0;

- (void).cxx_destruct;

@end
