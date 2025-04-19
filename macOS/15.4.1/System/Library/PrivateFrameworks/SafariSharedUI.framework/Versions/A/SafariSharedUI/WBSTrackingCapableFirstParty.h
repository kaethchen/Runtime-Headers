@class NSString;

@interface WBSTrackingCapableFirstParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;

@end
