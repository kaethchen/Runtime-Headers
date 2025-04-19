@class NSString;

@interface ABAssistantSyncAnchor : NSObject {
    long long _sequenceNumber;
    NSString *_recordID;
}

@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL shouldResetSync;
@property (readonly, nonatomic) BOOL shouldFullSync;
@property (readonly, nonatomic) BOOL shouldResumePreviousFullSync;
@property (readonly, nonatomic) BOOL shouldDeleteSyncedRecords;

+ (id)anchorWithString:(id)a0 forAddressBook:(id)a1;
+ (id)stringValueForFullSyncWithRecordID:(id)a0;
+ (id)stringValueWithSequenceNumber:(long long)a0 recordID:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSequenceNumber:(long long)a0 recordID:(id)a1;

@end
