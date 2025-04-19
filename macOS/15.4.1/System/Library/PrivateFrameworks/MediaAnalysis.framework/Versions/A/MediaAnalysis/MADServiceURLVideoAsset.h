@class NSURL, NSString;

@interface MADServiceURLVideoAsset : MADServiceVideoAsset {
    NSURL *_url;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)url;
- (unsigned long long)assetType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stillTime;
- (id)initWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;

@end
