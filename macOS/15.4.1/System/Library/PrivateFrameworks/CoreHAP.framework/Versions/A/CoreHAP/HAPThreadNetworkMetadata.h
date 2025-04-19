@class NSString, NSData;

@interface HAPThreadNetworkMetadata : HMFObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char channel;
@property (readonly, nonatomic) NSData *PANID;
@property (readonly, nonatomic) NSData *extendedPANID;
@property (readonly, nonatomic) NSData *masterKey;
@property (readonly, nonatomic) NSString *passPhrase;
@property (readonly, nonatomic) NSData *PSKc;
@property (readonly, nonatomic) NSData *activeOperationalDataSet;

+ (id)shortDescription;

- (id)description;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)privateDescription;
- (id)attributeDescriptions;
- (id)initWithActiveOperationalDataSet:(id)a0;
- (id)initWithName:(id)a0 channel:(unsigned char)a1 PANID:(id)a2 extendedPANID:(id)a3 masterKey:(id)a4 passPhrase:(id)a5 PSKc:(id)a6 activeOperationalDataSet:(id)a7;

@end
