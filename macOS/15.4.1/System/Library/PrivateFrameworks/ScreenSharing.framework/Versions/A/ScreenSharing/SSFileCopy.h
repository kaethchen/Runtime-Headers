@class NSString, NSDate, NSObject;
@protocol SSSessionProtocol;

@interface SSFileCopy : NSObject

@property (retain) NSObject<SSSessionProtocol> *session;
@property unsigned long long identifier;
@property int direction;
@property (copy) NSString *sourcePath;
@property (copy) NSString *destinationPath;
@property unsigned long long bytesToCopy;
@property unsigned long long bytesCopied;
@property int state;
@property int errorCode;
@property BOOL isDirectory;
@property (copy) NSString *displayName;
@property (retain) NSDate *startTime;

- (void)dealloc;
- (id)description;
- (id)initWithCopyIdentifier:(unsigned long long)a0 withSession:(id)a1;

@end
