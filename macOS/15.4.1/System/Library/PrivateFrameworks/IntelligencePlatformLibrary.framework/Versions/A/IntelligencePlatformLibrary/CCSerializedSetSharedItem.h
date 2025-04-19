@class NSData;

@interface CCSerializedSetSharedItem : CCItemMessage

@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) long long sharedIdentifier;
@property (nonatomic) BOOL hasSharedIdentifier;

- (id)initWithContent:(id)a0 sharedIdentifier:(id)a1 error:(id *)a2;

@end
