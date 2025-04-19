@class NSString, NSArray;

@interface FCTodayFeedConfigRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long feedType;
@property (readonly, copy, nonatomic) NSString *forYouConfigID;
@property (readonly, copy, nonatomic) NSString *formatVersion;
@property (readonly, copy, nonatomic) NSArray *additionalRecordIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeedType:(unsigned long long)a0 forYouConfigID:(id)a1 formatVersion:(id)a2 additionalRecordIDs:(id)a3;

@end
