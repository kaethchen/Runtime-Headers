@class NSString, NSURL, NSDateComponents, EXSAttachmentIDType;

@interface EXSAttachment : NSObject

@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *location;
@property (nonatomic) long long size;
@property (nonatomic) BOOL isInline;
@property (retain, nonatomic) NSDateComponents *lastModifiedTime;
@property (retain, nonatomic) NSURL *urlOnDisk;
@property (retain, nonatomic) NSString *filenameSuggestedByServer;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *consumerUUID;
@property (retain, nonatomic) EXSAttachmentIDType *attachmentID;
@property (retain, nonatomic) NSString *ownerID;
@property (nonatomic) BOOL uploadSuppressed;

+ (id)log;
+ (id)createAttachmentFromPropertiesDictionary:(id)a0;
+ (id)createEXSAttachmentWithName:(id)a0 identifier:(id)a1 contentType:(id)a2 contentID:(id)a3 contentLocation:(id)a4 shouldInline:(BOOL)a5 lastModifiedTime:(id)a6 attachmentSize:(long long)a7 optionalURLString:(id)a8 andConsumerUUID:(id)a9;

- (void).cxx_destruct;
- (id)deriveJSONrepresentation;

@end
