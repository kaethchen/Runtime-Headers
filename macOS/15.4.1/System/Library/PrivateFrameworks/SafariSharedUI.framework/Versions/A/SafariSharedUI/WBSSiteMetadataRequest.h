@class NSURL, NSDictionary, NSObject;
@protocol OS_os_activity;

@interface WBSSiteMetadataRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;

@end
