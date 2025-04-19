@class NSString, NSData;

@interface WFLibraryRecord : WFRecord

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *cloudKitRecordMetadata;
@property (nonatomic) long long lastSyncedHash;

- (void).cxx_destruct;
- (long long)computedSyncHash;

@end
