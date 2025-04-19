@class NSString, NSArray;

@interface MADServiceTextAsset : NSObject

@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *clientTeamID;
@property (readonly, nonatomic) NSArray *textInputs;

+ (id)assetWithTextInputs:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;

- (void).cxx_destruct;
- (id)initWithTextInputs:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;

@end
