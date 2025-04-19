@class NSUUID, NSString;

@interface BKSDyldSharedCacheLayoutResultEntry : NSObject

@property (readonly, nonatomic) unsigned long long offsetFromDyldSharedCacheBaseAddress;
@property (readonly, nonatomic) NSUUID *symbolOwnerUUID;
@property (readonly, nonatomic) NSString *symbolOwnerInstallPath;
@property (readonly, nonatomic) NSString *segmentName;

- (void).cxx_destruct;
- (id)initWithOffset:(unsigned long long)a0 symbolOwnerUUID:(id)a1 symbolOwnerInstallPath:(id)a2 segmentName:(id)a3;

@end
