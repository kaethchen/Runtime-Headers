@class NSString, NSArray, NSDictionary, NSURL;

@interface iCloudSettings.Icons : NSObject {
    void /* unknown type, empty encoding */ assetId;
    void /* unknown type, empty encoding */ bundleIdentifiers;
    void /* unknown type, empty encoding */ sfSymbolId;
    void /* unknown type, empty encoding */ urls;
}

@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSString *sfSymbolId;
@property (nonatomic, readonly) NSDictionary *urls;
@property (nonatomic, readonly) NSURL *url1x;
@property (nonatomic, readonly) NSURL *url2x;
@property (nonatomic, readonly) NSURL *url3x;
@property (nonatomic, readonly) NSURL *darkUrl1x;
@property (nonatomic, readonly) NSURL *darkUrl2x;
@property (nonatomic, readonly) NSURL *darkUrl3x;

- (id)init;
- (void).cxx_destruct;
- (id)iconURL;
- (id)init:(id)a0;

@end
