@class NSString, NSData;

@interface FLDPGBatch : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSData *payload;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 payload:(id)a1;

@end
