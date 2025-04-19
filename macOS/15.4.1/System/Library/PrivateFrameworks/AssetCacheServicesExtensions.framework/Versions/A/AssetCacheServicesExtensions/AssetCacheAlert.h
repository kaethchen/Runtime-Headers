@class NSDictionary, NSString, NSDate;

@interface AssetCacheAlert : NSObject

@property (retain) NSDate *postDate;
@property (readonly) NSDictionary *externalRepresentation;
@property (readonly) NSString *briefTitle;
@property (readonly) NSString *briefText;
@property (readonly) NSString *verboseTitle;
@property (readonly) NSString *verboseText;
@property (readonly) NSString *sharingPrefsAnchor;
@property (readonly) double interval;

+ (id)_bundle;
+ (id)_localizedStringForProperty:(id)a0;
+ (id)_localizedStringForRoute:(id)a0;
+ (id)alertWithExternalRepresentation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)a0;

@end
