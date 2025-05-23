@class NSUUID, NSString;

@interface UPModelIdentifier : NSObject <NSCopying>

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSString *appBundleId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppBundleId:(id)a0;

@end
