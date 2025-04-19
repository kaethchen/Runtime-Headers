@class NSString;

@interface APOdmlAppInfo : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long adamID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 adamID:(unsigned long long)a1;

@end
