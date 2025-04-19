@class NSString;

@interface PXActionRecord : NSObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) long long assetCount;
@property (readonly, nonatomic) long long userConfirmation;
@property (readonly, nonatomic) NSString *publicDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0 assetCount:(long long)a1;
- (id)initWithSourceIdentifier:(id)a0 assetCount:(long long)a1 userConfirmation:(long long)a2;
- (id)initWithSourceIdentifier:(id)a0 variant:(id)a1 assetCount:(long long)a2 userConfirmation:(long long)a3;
- (id)withUserConfirmation:(long long)a0 assetCount:(long long)a1;
- (id)withVariant:(id)a0;

@end
