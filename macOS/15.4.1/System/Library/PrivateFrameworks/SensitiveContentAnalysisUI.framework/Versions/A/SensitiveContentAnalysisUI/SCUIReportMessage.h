@class NSString, NSArray, NSDate;

@interface SCUIReportMessage : NSObject

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *senderAccountID;
@property (readonly, copy) NSString *senderDisplayName;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSArray *attachmentIdentifiers;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 senderAccountID:(id)a1 senderDisplayName:(id)a2 body:(id)a3 attachmentIdentifiers:(id)a4;

@end
