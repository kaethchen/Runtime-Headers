@class NSURL, NSString;

@interface BLHLSKey : NSObject

@property (readonly, nonatomic) long long method;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *keyFormat;
@property (readonly, nonatomic) NSString *keyFormatVersions;
@property (readonly, nonatomic) NSString *iv;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setPropertiesFromAttributeList:(id)a0;
- (BOOL)isEqualToHLSKey:(id)a0;
- (BOOL)isFormatSupported;

@end
