@class NSString, NSMutableData, NSDate;

@interface JournalRecordInfo : NSObject

@property (readonly) NSString *journalName;
@property (readonly) NSDate *lastUpdate;
@property (readonly) NSMutableData *journalData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJournalName:(id)a0 lastUpdate:(id)a1 journalData:(id)a2;

@end
