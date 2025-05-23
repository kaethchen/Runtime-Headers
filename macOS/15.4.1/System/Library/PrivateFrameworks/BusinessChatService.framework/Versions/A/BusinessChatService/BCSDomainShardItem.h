@class NSURL, NSString, NSDate;

@interface BCSDomainShardItem : BCSShardItem <BCSDomainShardItemProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *base64EncodedString;
@property (readonly, nonatomic) long long startIndex;
@property (readonly, nonatomic) long long shardCount;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithFileURL:(id)a0 startIndex:(long long)a1 shardCount:(long long)a2 type:(long long)a3 expirationDate:(id)a4;
- (id)initWithJSONObj:(id)a0 type:(long long)a1;
- (id)initWithRecord:(id)a0 type:(long long)a1;

@end
