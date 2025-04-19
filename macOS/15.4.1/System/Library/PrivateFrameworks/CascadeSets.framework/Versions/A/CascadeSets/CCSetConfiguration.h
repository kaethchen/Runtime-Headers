@class CCSetSyncPolicy, NSString, NSUUID, NSArray;

@interface CCSetConfiguration : NSObject

@property (readonly, nonatomic) NSString *setIdentifier;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSUUID *setUUID;
@property (readonly, nonatomic) unsigned long long resourceDomain;
@property (readonly, nonatomic) NSArray *configuredDescriptors;
@property (readonly, nonatomic) CCSetSyncPolicy *syncPolicy;

+ (id)setConfigurationForItemType:(unsigned short)a0;
+ (id)syncableSetConfigurations;

- (void).cxx_destruct;
- (id)initWithSetIdentifier:(id)a0 setUUID:(id)a1 resourceDomain:(unsigned long long)a2 configuredDescriptors:(id)a3 syncPolicy:(id)a4;

@end
