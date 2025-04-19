@class NSUUID, NSString, NSDate, HKCloudSyncRequest;
@protocol HDXPCActivity;

@interface HDCloudSyncContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long reason;
@property (copy, nonatomic) HKCloudSyncRequest *syncRequest;
@property (readonly, nonatomic) id<HDXPCActivity> xpcActivity;
@property (copy, nonatomic) NSDate *unitTest_syncDateOverride;

+ (id)contextForFastPush;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEquivalent:(id)a0;
- (id)initForPurpose:(long long)a0 options:(unsigned long long)a1 reason:(long long)a2 xpcActivity:(id)a3;
- (BOOL)isFastPushOrPull;
- (id)subContextByAddingOptions:(unsigned long long)a0;
- (id)subContextByRemovingOptions:(unsigned long long)a0;

@end
