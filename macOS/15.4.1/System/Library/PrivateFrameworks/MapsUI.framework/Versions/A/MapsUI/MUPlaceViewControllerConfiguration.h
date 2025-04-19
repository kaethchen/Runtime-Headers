@class NSString, _MKUIViewController, GEOApplicationAuditToken;

@interface MUPlaceViewControllerConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) GEOApplicationAuditToken *developerPlaceCardAuditToken;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (retain, nonatomic) _MKUIViewController *headerViewController;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
