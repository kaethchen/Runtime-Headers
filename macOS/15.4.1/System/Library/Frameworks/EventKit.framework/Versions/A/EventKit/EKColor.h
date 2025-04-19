@class EKSource, NSString, NSData;

@interface EKColor : EKObject

@property (retain, nonatomic) EKSource *source;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSData *data;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (void)setUUID:(id)a0;
- (BOOL)save:(id *)a0;
- (BOOL)validate:(id *)a0;
- (id)initWithEventStore:(id)a0;

@end
