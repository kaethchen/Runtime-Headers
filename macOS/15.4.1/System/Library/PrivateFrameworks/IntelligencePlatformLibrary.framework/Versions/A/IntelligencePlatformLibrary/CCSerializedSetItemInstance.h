@class NSData;

@interface CCSerializedSetItemInstance : CCItemMessage

@property (readonly, nonatomic) NSData *metaContent;
@property (readonly, nonatomic) long long instanceIdentifier;
@property (nonatomic) BOOL hasInstanceIdentifier;

- (id)initWithMetaContent:(id)a0 instanceIdentifier:(id)a1 error:(id *)a2;

@end
