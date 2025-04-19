@class NSString, NSData;

@interface IMDHistoryAttachment : NSObject

@property (retain) NSString *path;
@property (retain) NSString *filename;
@property (retain) NSData *data;
@property (retain) NSString *guid;
@property (retain) NSString *UTIType;
@property (retain) NSString *mimeType;
@property long long transferState;
@property double dateCreated;

- (void)dealloc;
- (id)description;
- (id)initWithAttributeDictionary:(id)a0;

@end
