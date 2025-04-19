@class NSArray, NSString, NSDictionary, NSDate, NSNumber;

@interface SOTranscriptArchive : NSObject

@property (readonly) NSArray *placeholders;
@property (readonly, copy) NSString *accountName;
@property (readonly, copy) NSArray *messages;
@property (readonly, copy) NSArray *participants;
@property (readonly, copy) NSNumber *chatStyle;
@property (readonly, copy) NSString *roomName;
@property (readonly) NSDictionary *metaData;
@property (readonly) NSDate *dateCreated;
@property (readonly) NSDate *dateModified;

+ (void)setupArchivedMessageEncoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)archive;
- (id)initWithAccountName:(id)a0 chatStyle:(id)a1 roomName:(id)a2 dateCreated:(id)a3 dateModified:(id)a4 messageList:(id)a5 serviceName:(id)a6 lastMessageID:(unsigned long long)a7 loginHandle:(id)a8 participants:(id)a9;
- (id)_createInfoArrayForArchiving;

@end
